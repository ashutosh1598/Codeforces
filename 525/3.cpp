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
    ll n;
    cin>>n;
    int x;
    for(int i=0;i<n;++i)cin>>x;
    cout<<n+1<<'\n';
    cout<<2<<' '<<n<<' '<<1<<'\n';
    x=1e6;
    cout<<1<<' '<<n<<' '<<x<<'\n';
    for(int i=1;i<n;++i)
    {
        cout<<2<<' '<<i<<' '<<x-i+1<<'\n';
    }

}
