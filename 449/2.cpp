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
ll k,p;
ll sol(ll i)
{
    ll x=i;
    ll rev=0;
    ll te=x;
    ll po10=1;
    int dig=0;
    while(te)
    {
        dig++;
        ll d=te%10;te/=10;
        rev=rev*10+d;
    }
    for(int i=0;i<dig;++i)
    {
        po10*=10;
    }
    return x*po10+rev;
}
int main()
{
    ios_base::sync_with_stdio(false);
    /*
    ll t;
    while(cin>>t)
    {
        cout<<sol(t)<<'\n';
    }
    return 0;
    */
    cin>>k>>p;
    ll ans=0;
    for(int i=1;i<=k;++i)
    {
        ans+=sol(i);
        ans%=p;
    }
    cout<<ans<<'\n';
}



























