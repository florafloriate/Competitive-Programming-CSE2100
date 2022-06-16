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
        int a,b; cin>>a>>b;

        int p=a/2,q=a/2;
        if(a%2!=0)
            p++;

        if(b>p)
            cout<<"-1"<<endl;
        else
        {
            string s="",ss="";
            char c='a';
            for(int i=0; i<b; i++)
                s.push_back(c+i);

            for(int i=b; i<p; i++)
                s.push_back(c);

            for(int i=a/2-1; i>=0; i--)
                ss.push_back(s[i]);

            string ans=s+ss;

            cout<<ans<<endl;
        }
    }
}
