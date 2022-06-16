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
        ll a[5]; cin>>a[0]>>a[1]>>a[2];

        sort(a,a+3);

        int x,y,z;
        for(int i=0; i<32; i++)
        {
            x=0;
            if(Checkbit(a[0],i))
                x++;
            if(Checkbit(a[1],i))
                x++;
            if(Checkbit(a[2],i))
                x++;

            if(x==1)
            {
                if(Checkbit(a[0],i))
                    a[0]=a[0]+(1LL<<i);
                else if(Checkbit(a[1],i))
                    a[1]=a[1]+(1LL<<i);
                else if(Checkbit(a[2],i))
                    a[2]=a[2]+(1LL<<i);
            }
            else if(x==2)
            {
                if(!Checkbit(a[0],i))
                    a[0]=a[0]+(1LL<<i);
                else if(!Checkbit(a[1],i))
                    a[1]=a[1]+(1LL<<i);
                else if(!Checkbit(a[2],i))
                    a[2]=a[2]+(1LL<<i);
            }
            else
            {
                break;
            }
        }

        if(a[0]==a[1] && a[1]==a[2])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
