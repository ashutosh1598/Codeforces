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
ll ch(ll x)
{
    ll ans=0;
    while(x!=0)
    {
        ans+=x%10;
        x/=10;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll k;
    cin>>k;
    ll i=1;
    ll co=0;
    while(1)
    {
        if(ch(i)==10)
        {
            co++;
        }
        if(co==k)
        {
            cout<<i<<'\n';
            return 0;
        }
        ++i;
    }
}
