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
        ll a[n+5];
        ll b[n+5];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            b[i]=1;
        }

        if(a[0]<0)
        {
            cout<<"No"<<endl;
            continue;
        }

        int x=-1;
        for(int i=n-1; i>=0; i--)
        {
            if(a[i]!=0)
            {
                b[i]=0;
                x=i; break;
            }
        }

        if(x==-1)
        {
            cout<<"Yes"<<endl;
            continue;
        }

        bool ok=false;
        ll cnt;
        for(int i=x; i>0; i--)
        {
            if(b[i]<=a[i])
            {
                cout<<"No"<<endl;
                ok=true; break;
            }

            cnt=b[i];
            b[i]=a[i];
            b[i-1]=cnt-a[i];
        }

        if(ok)
            continue;
        else if(a[0]==b[0])
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}




