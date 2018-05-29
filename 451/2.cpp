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
    ll n,a,b;
    cin>>n>>a>>b;
    ll x=0;
    while(x<=n)
    {
        ll by=n-a*x;
        if(by<0)
        {
            break;
        }
        if(by%b==0)
        {
            cout<<"YES\n";
            cout<<x<<' '<<by/b<<'\n';
            return 0;
        }
        ++x;
    }
    cout<<"NO\n";
}
