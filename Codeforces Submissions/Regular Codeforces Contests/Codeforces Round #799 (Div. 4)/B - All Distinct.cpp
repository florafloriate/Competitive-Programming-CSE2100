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
        int n; cin>>n;
        int a[n+5];
        map<int,int> m;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            m[ a[i] ]++;
        }

        int ans=0;
        for(auto it:m)
        {
            ans=ans+it.second-1;
        }

        if(ans%2==0)
            cout<<n-ans<<endl;
        else
            cout<<n-(ans+1)<<endl;


    }
}
