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
#include"unordered_set"
#include"map"
#include"unordered_map"
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
const int maxn=1e5+5;
ll sl[maxn],a[maxn],b[maxn],tou[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n,s;
	cin>>n>>s;
	ll tot=0;
	vector< pair<pll,pll> > re;
	for(int i=0;i<n;++i)
	{
		cin>>sl[i]>>a[i]>>b[i];
		tot+=sl[i];
		re.pb(mp(mp(sl[i]*a[i],a[i]),mp(1,i)));
		re.pb(mp(mp(sl[i]*a[i],b[i]),mp(2,i)));
	}
	sort(all(re));
	tot=(tot+s-1)/s;
	ll sumsl=tot*s;
	ll p1=0,p2=0;
	ll pt1=0,pt2=0;
	for(int i=2*n-1;i>=0;--i)
	{
		auto te=re[i];
		ll type=te.ss.ff;
		if(tou[te.ss.ss])continue;
		tou[te.ss.ss]=1;
		if(type==1)
		{
			if(p1<sl[te.ss.ss])
			{
				if(pt1+pt2==tot)continue;
				pt1++;
				p1+=s;
				p1-=sl[
			}
		}
	}
}











