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
        int n,m; cin>>n>>m;
        ll a[n+5][m+5];
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                cin>>a[i][j];
            }
        }

        int ans=0;
        int cnt=0;
        int x,y,z;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                x=i; y=j; z=j;
                ans=a[i][j];
                for(int k=i-1; k>=1; k--)
                {
                    y--; z++;
                    if(y>=1)
                        ans=ans+a[k][y];
                    if(z<=m)
                        ans=ans+a[k][z];
                }
                y=j; z=j;
                for(int k=i+1; k<=n; k++)
                {
                    y--; z++;
                    if(y>=1)
                        ans=ans+a[k][y];
                    if(z<=m)
                        ans=ans+a[k][z];
                }

                cnt=max(ans,cnt);
            }
        }

        cout<<cnt<<endl;
    }
}
