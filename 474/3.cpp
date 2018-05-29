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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x,d;
    cin>>x>>d;
    list<ll>pp;
    ll nu=1;
    while(x!=0)
    {
        if(  !(x&(x+1)))
        {
            int n1=__builtin_popcount(x);
            while(n1--)pp.pb(nu);
            x=0;
        }
        else
        {
            ll n1=1;
            while(  (1LL<<n1)-1<x)
            {
                n1++;
            }
            n1--;
            x-=(1LL<<n1)-1;
            while(n1--)
            {
                pp.pb(nu);
            }
            nu+=d+1;
        }
    }
    cout<<pp.size()<<'\n';
    for(ll x:pp)cout<<x<<' ';
    cout<<'\n';
}
