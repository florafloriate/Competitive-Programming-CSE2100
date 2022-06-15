#include<bits/stdc++.h>
#define mod              1000000007
#define INF              1e9
#define pi               acos(-1)
#define ll               long long
#define endl             "\n"
#define F                first
#define S                second
#define LL_INF           1LL<<62
#define twopow(x)        (1LL<<x)
#define Checkbit(x, k)   (x & (1LL << k)) ///whether the k-th bit of x is zero or not
#define mem(name,value)  memset(name, value, sizeof(name))
#define binary(x)        bitset<31>(x)
#define decimal(x)       fixed<<setprecision(x)
#define fastio           ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

int main()
{
    fastio;

    int t; cin>>t;
    while(t--)
    {
        int n,s; cin>>n>>s;
        int a[n+5];
        int chk=0;
        vector<int> v;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                chk++;
                v.push_back(i);
            }
        }

        if(chk<s)
        {
            cout<<"-1"<<endl;
            continue;
        }
        else if(chk==s)
        {
            cout<<"0"<<endl;
            continue;
        }

        int mini=n-v[s]+1;
        int x=0;
        for(int i=s+1; i<v.size(); i++)
        {
            mini=min(mini,n-v[i]+v[x]+1);
            x++;
        }
        mini=min(mini,v[x]);

        cout<<mini<<endl;
    }
}
