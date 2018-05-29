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
ll n,T;
struct pro
{
    ll ai,ti,id;
    bool operator<(const pro & ob)
    {
        return ti==ob.ti?id<ob.id:ti<ob.ti;
    }
};
vector<pro>re;
int che(ll mi)
{
    ll tim=0;
    ll count=0;
    if(mi==0)return 1;
    for(int i=0;i<n;++i)
    {
        if(re[i].ai>=mi)
        {
            tim+=re[i].ti;
            if(tim>T)
            {
                return 0;
            }
            count++;
            if(count>=mi)return 1;
        }
    }
    return 0;
}
void solve(ll mi)
{
    if(mi==0)
    {
        cout<<"0\n0\n\n";
        return;
    }
    ll count=0;
    list<ll>pp;
    for(int i=0;i<n;++i)
    {
        if(re[i].ai>=mi)
        {
            pp.pb(re[i].id);
            count++;
            if(count>=mi)break;
        }
    }
    cout<<mi<<'\n'<<mi<<'\n';
    for(ll x:pp)
    {
        cout<<x<<' ';
    }
    cout<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>T;
    re.resize(n);
    for(int i=0;i<n;++i)
    {
        cin>>re[i].ai>>re[i].ti;
        re[i].id=i+1;
    }
    sort(all(re));
    ll lo=0,hi=n;
    while(lo<hi-1)
    {
        ll mi=(lo+hi)/2;
        if(che(mi))
        {
            lo=mi;
        }
        else hi=mi;
    }
    if(che(hi))
    {
        solve(hi);
    }
    else solve(lo);
}





