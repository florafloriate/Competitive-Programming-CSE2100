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
        char a[10][10];

        for(int i=1; i<=8; i++)
        {
            for(int j=1; j<=8; j++)
            {
                cin>>a[i][j];
            }
        }

        int x=0;
        int r=0,c=0;
        for(int i=2; i<=7; i++)
        {
            for(int j=2; j<=7; j++)
            {
                if(a[i][j]=='#')
                {
                    if(a[i-1][j-1]=='#' && a[i-1][j+1]=='#' && a[i+1][j-1]=='#' && a[i+1][j+1]=='#')
                    {
                        r=i;
                        c=j;
                    }
                }
            }
        }

        cout<<r<<" "<<c<<endl;

    }
}
