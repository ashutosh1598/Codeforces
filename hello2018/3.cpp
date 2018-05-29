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
ll fac=(1LL<<29);
struct bot
{
    ll c,vol;
    bool operator<(const bot & ob)
    {
        return c*fac/vol<ob.c*fac/ob.vol;
    }
};
vector<bot>re;
ll n,L;
int che(ll mi)
{
    ll amo=0;
    for(int i=0;i<n;++i)
    {
        ll coin=mi/re[i].c;
        if(1e14/re[i].vol<coin)return 1;
        amo+=coin*re[i].vol;
        mi-=coin*re[i].c;
        if(amo>=L)return 1;
//        cout<<i<<' '<<amo<<" i amo\n";
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>L;
    re.resize(n);
    for(int i=0;i<n;++i)
    {
        cin>>re[i].c;
        re[i].vol=(1LL<<i);
    }
    ll lo=1,hi=1e18;
    sort(all(re));
    for(int i=0;i<n;++i)
    {
        //cout<<re[i].c<<' '<<re[i].vol<<" cost volume\n";
    }
    while(lo<hi-1)
    {
    //    cout<<lo<<' '<<hi<<'\n';
        ll mi=lo+(hi-lo)/2;
      //  cout<<mi<<"   mi \n";
        //cout<<che(mi)<<" che\n";
        if(che(mi))
        {
            hi=mi;
        }
        else
        {
            lo=mi;
        }
    }
    if(che(lo))
    {
        cout<<lo<<'\n';
    }
    else cout<<hi<<'\n';
}




