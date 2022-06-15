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

    ll n; cin>>n;
    ll a[n+5];
    map<ll,ll> m;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }

    vector<int> v;
    for(auto it : m)
    {
        v.push_back(it.first);
    }

    ll l=v.back();

    ll b[l+5];
    for(int i=0; i<=l; i++)
    {
        b[i]=m[i]*i;
    }

    b[2]=max(b[1],b[2]);
    for(int i=3; i<=l; i++)
    {
        b[i]=max(b[i]+b[i-2],b[i-1]);
    }

    cout<<b[l]<<endl;
}
