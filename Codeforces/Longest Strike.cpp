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
        int n,k; cin>>n>>k;
        ll a[n+5];
        map<ll,ll> m;
        for(int i=0; i<n; i++)
        {
            ll x; cin>>x;
            m[x]++;
        }

        int p=0;
        for(auto it:m)
        {
            if(it.second>=k)
            {
                a[p]=it.first;
                p++;
            }
        }

        if(p==0)
        {
            cout<<"-1"<<endl;
            continue;
        }

        int mx=1;
        int L=a[0],R=a[0];
        int l=a[0],r=a[0];
        int cnt=1;

        for(int i=1; i<p; i++)
        {
            if(a[i]==a[i-1]+1)
            {
                mx++;
                r=a[i];
                if(cnt<=mx)
                {
                    cnt=max(cnt,mx);
                    L=l;
                    R=r;
                }
            }
            else
            {
                mx=1;
                l=a[i];
                r=a[i];
            }
        }

        cout<<L<<" "<<R<<endl;
    }
}
