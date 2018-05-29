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
const int maxn=1e5+10;
int ch[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll>r(n);
    ll mi=1e14;
    for(int i=0;i<n;++i)
    {
        cin>>r[i];
        mi=min(mi,r[i]);
    }
    for(int i=0;i<n;++i)if(r[i]==mi)ch[i]=1;
    ll pr=-1e14;
    ll ans=1e14;
    for(int i=0;i<n;++i)
    {
        if(ch[i])
        {
            ans=min(ans,i-pr);
            pr=i;
        }
    }
    cout<<ans<<'\n';
}
