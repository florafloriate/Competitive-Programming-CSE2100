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
        ll n; cin>>n;
        ll a[n+5];
        for(int i=0; i<n; i++)
        {
            ll x; cin>>x;
            a[i]=x%10;
        }

        sort(a,a+n);
        map<ll,ll> m;
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            m[a[i]]++;
            if(m[a[i]]<=3)
                v.push_back(a[i]);
        }

        bool f=false;
        for(int i=0; i<v.size(); i++)
        {
            for(int j=i+1; j<v.size(); j++)
            {
                for(int k=j+1; k<v.size(); k++)
                {
                    if((v[i]+v[j]+v[k])%10==3)
                        f=true;
                }
            }
        }

        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
