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
        string s; cin>>s;
        int a=0,b=0;

        for(int i=0; i<3; i++)
            a=a+s[i]-'0';

        for(int i=3; i<6; i++)
            b=b+s[i]-'0';

        if(a==b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
