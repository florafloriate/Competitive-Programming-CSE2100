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
        string s,ans=""; cin>>s;

        for(int i=1; i<n; i+=2)
        {
            int a=s[i-1]-'0',b=s[i]-'0';
            int m=a*10+b;

            if(m==0)
                ans.push_back('A');
            else if(m==1)
                ans.push_back('T');
            else if(m==10)
                ans.push_back('C');
            else
                ans.push_back('G');
        }

        cout<<ans<<endl;
    }
}
