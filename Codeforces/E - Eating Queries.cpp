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
        int n,q; cin>>n>>q;
        ll a[n+5];
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }

        sort(a,a+n);
        reverse(a,a+n);

        for(int i=1; i<n; i++)
        {
            a[i]=a[i]+a[i-1];
        }

        while(q--)
        {
            ll x; cin>>x;
            ll s=sum;
            if(sum<x)
            {
                cout<<"-1"<<endl;
                continue;
            }
            else if(sum==x)
            {
                cout<<n<<endl;
                continue;
            }
            else
            {
                int l=0, r=n-1, mid;
                while(l<=r)
                {
                    mid=(l+r)/2;

                    if(a[mid]<x)
                        l=mid+1;
                    else
                        r=mid-1;
                }

                cout<<l+1<<endl;
            }


        }
    }
}
