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

int sg(int x)
{
    if(x>=0)return 1;
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pii>re(3);
    for(int i=0;i<3;++i)
    {
        cin>>re[i].ff>>re[i].ss;
    }
    sort(all(re));
    int ans=(re[1].ff-re[0].ff+1)+abs(re[1].ss-re[0].ss);
    list<pii>pp;
    for(int x=re[0].ff;x<re[1].ff;++x)
    {
        pp.pb(mp(x,re[0].ss));
    }
    for(int y=re[0].ss;y!=re[1].ss; y+= sg(re[1].ss-re[0].ss) )
    {
        pp.pb(mp(re[1].ff,y));
    }
    pp.pb(mp(re[1].ff,re[1].ss));

    ans+=re[2].ff-re[1].ff;

    int up=re[1].ss;
    int lo=re[0].ss;
    if(lo>up)swap(lo,up);

    for(int x=re[1].ff+1;x<=re[2].ff;++x)
    {
        pp.pb(mp(x,re[2].ss));
    }

    if(re[2].ss<=up&&re[2].ss>=lo)
    {
        assert(ans==pp.size());
        cout<<ans<<'\n';
        for(pii xx:pp)cout<<xx.ff<<' '<<xx.ss<<'\n';
        return 0;
    }

    int yc=-1;

    int qnt=min(abs(re[2].ss-lo),abs(re[2].ss-up));
    ans+=qnt;
    if((lo==up&&re[2].ss<=lo)||(lo!=up&&abs(re[2].ss-lo)<=abs(re[2].ss-up)) )
    {
        yc=lo;
        for(int y=lo-1;y>=re[2].ss;--y)
        {
            pp.pb(mp(re[1].ff,y));
        }
    }
    else
    {
        yc=up;
        for(int y=up+1;y<=re[2].ss;++y)
        {
            pp.pb(mp(re[1].ff,y));
        }
    }
    cout<<ans<<'\n';
    for(pii xx:pp)cout<<xx.ff<<' '<<xx.ss<<endl;
    assert(ans==pp.size());
}

