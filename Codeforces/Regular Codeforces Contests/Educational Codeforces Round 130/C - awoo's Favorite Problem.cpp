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
        string s,t; cin>>s>>t;
        string fs="",ft="";
        vector<int> a,b,c,d;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='a' || s[i]=='c')
            {
                fs.push_back(s[i]);
                if(s[i]=='a')
                    a.push_back(i);
                else if(s[i]=='c')
                    b.push_back(i);
            }

            if(t[i]=='a' || t[i]=='c')
            {
                ft.push_back(t[i]);
                if(t[i]=='a')
                    c.push_back(i);
                else if(t[i]=='c')
                    d.push_back(i);
            }
        }

        //cout<<fs<<endl<<ft;

        if(fs!=ft)
            cout<<"NO"<<endl;
        else
        {
            bool ok=true;
            int m=a.size(),k=b.size();
            for(int i=0; i<m; i++)
            {
                if(a[i]>c[i])
                    ok=false;
            }

            for(int i=0; i<k; i++)
            {
                if(b[i]<d[i])
                    ok=false;
            }

            if(ok)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}
