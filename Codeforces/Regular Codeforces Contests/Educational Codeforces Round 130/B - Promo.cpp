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
//    int t; cin>>t;

//    while(t--)
//    {
        int n,q; cin>>n>>q;
        ll a[n+5];
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        reverse(a,a+n);
        for(int i=1; i<n; i++)
            a[i]=a[i-1]+a[i];

        while(q--)
        {
            int x,y; cin>>x>>y;
            int item=x-y;
            if(item==0)
            {
                cout<<a[x-1]<<endl;
                continue;
            }
            ll ans=a[x-1]-a[item-1];
            cout<<ans<<endl;
        }
 //   }
}
