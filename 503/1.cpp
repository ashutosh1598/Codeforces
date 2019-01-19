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
const int maxn = 3000 + 5;
vector<pll> co[maxn];
ll vtop[maxn];
ll ctop[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll uni = 0;
    ll n,m;
    cin>>n>>m;
    for(int i=0;i<n;++i)
    {
        ll p,c;
        cin>>p>>c;
        vtop[i]=p;
        ctop[i]=c;
        if(p==1)
        {
            uni++;
        }
        else
        {
            co[p].pb(mp(c,i));
        }
    }
    if(m==1)
    {
        cout<<"0\n";
        return 0;
    }
    for(int i = 2;i<=m;++i)
    {
        if(!co[i].empty())
        {
            sort(all(co[i]));
        }
    }
    ll ans = 1e18;
    for(int up = uni;up<=n/2.0+1.3;up++)
    {
        if(up==0)continue;
        ll cost =0;
        ll temp = uni;
        vector<int>marked(n,0);
        for(int i = 2;i<=m;++i)
        {
            if((int)co[i].size()>=up)
            {
                int rem = co[i].size()-up+1;
                for(int j=0;j<rem;++j)
                {
                    cost += co[i][j].ff;
                    temp++;
                    //cout<<co[i][j].ss<<' '<<i<<' '<<j<<" i j coijss"<<endl;
                    marked[co[i][j].ss]=1;
                }
            }
        }
        if(temp>=up)
        {
            ans = min(ans,cost);
            continue;
        }
        else
        {
            vector<ll>chevo;
            for(int i=0;i<n;++i)
            {
                if(marked[i]==0&&vtop[i]!=1)
                {
                    chevo.pb(ctop[i]);
                }
            }
            sort(all(chevo));
            ll toad=up-temp;
            for(int i=0;i<toad;++i)
            {
                cost+=chevo[i];
            }
            ans = min(ans,cost);
        }
    }
    cout<<ans<<'\n';
}
