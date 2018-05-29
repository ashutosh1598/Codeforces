#include"iomanip"
#include"iostream"
#include"limits"
#include"cmath"
#include"vector"
#include"algorithm"
#include"list"
#include"queue"
#include"stack"
#include"set"
#include"map"
#include"string"
#include"cstring"
#include"assert.h"
using namespace std;
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define mp make_pair
#define pb push_back
#define mset(a,b) memset(a,b,sizeof(a))
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
void sol(vector<string>&r)
{
    int m=r.size();
        vector<int>rem(m+3,0);
        for(int i=0;i<m;++i)
        {
            for(int j=0;j<m;++j)
            {
                if(i==j||rem[j])continue;
                int l1=r[i].length(),l2=r[j].length();
                if(l2<l1)continue;
                int ok=1;
                for(int i1=0,i2=l2-l1;i1<l1;++i1,++i2)
                {
                    if(r[i][i1]!=r[j][i2])
                    {
                        ok=0;
                        break;
                    }
                }
                if(ok==1)
                {
                    rem[i]=1;
                    break;
                }
            }
        }
        list<string>ans;
        for(int i=0;i<m;++i)
        {
            if(rem[i]==0)
            {
                ans.pb(r[i]);
            }
        }
        cout<<ans.size()<<' ';
        for(string aa:ans)cout<<aa<<' ';
        cout<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    map<string,vector<string> >my;
    while(n--)
    {
        string x;
        cin>>x;
        int m;
        cin>>m;
        for(int i=0;i<m;++i)
        {
            string y;
            cin>>y;
            my[x].pb(y);
        }
    }
    cout<<my.size()<<'\n';
    for(auto i:my)
    {
        cout<<i.ff<<' ';
        sol(i.ss);
    }
}









