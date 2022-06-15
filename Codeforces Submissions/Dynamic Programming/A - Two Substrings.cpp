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

    string s; cin>>s;
    int n=s.size();

    int x=-1,y=-1;
    vector<pair<int,int>> ab,ba;
    for(int i=1; i<n; i++)
    {
        if(s[i-1]=='A' && s[i]=='B')
        {
            x=i-1;
            y=i;
            ab.push_back({x,y});
        }
        else if(s[i-1]=='B' && s[i]=='A')
        {
            x=i;
            y=i-1;
            ba.push_back({x,y});
        }
    }

    bool ok=false;
    for(auto p:ab)
    {
        for(auto q:ba)
        {
            if(p.first!=q.first && p.second!=q.second)
            {
                ok=true; break;
            }
        }
    }

    if(ok)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
