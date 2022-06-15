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
        int h,m,x; char c;
        cin>>h>>c>>m>>x;

        int ans=0;
        int p=h,q=m;

        q=q+x;
        p=(p+(q/60))%24;
        q=q%60;
        int a=(p/10)%10,b=p%10;
        if(b*10+a == q)
            ans++;

        while(1)
        {
            if(p==h && q==m)
                break;

            q=q+x;
            p=(p+(q/60))%24;
            q=q%60;

            a=(p/10)%10,b=p%10;
            if(b*10+a == q)
                ans++;
        }

        cout<<ans<<endl;
    }
}
