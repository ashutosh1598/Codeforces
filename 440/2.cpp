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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n,k;
	cin>>n>>k;
	vector<ll>rec(n+4),mipref(n+4,1e18),misuff(n+4,1e18);
	ll ma1=-1e17,mi1=1e17;;
	for(int i=0;i<n;++i)
	{
		cin>>rec[i];
		ma1=max(ma1,rec[i]);
		mi1=min(mi1,rec[i]);
	}
	if(k==1)
	{
		cout<<mi1<<'\n';
		return 0;
	}
	if(k>=3)
	{
		cout<<ma1<<'\n';
		return 0;
	}
	mipref[0]=rec[0];
	misuff[n-1]=rec[n-1];
	ll ans=-1e17;
	for(int i=1;i<n;++i)
	{
		mipref[i]=min(mipref[i-1],rec[i]);
	}
	for(int i=n-2;i>=0;--i)
	{
		misuff[i]=min(misuff[i+1],rec[i]);
	}
	for(int i=0;i<n-1;++i)
	{
		ll th=max(mipref[i],misuff[i+1]);
		ans=max(ans,th);
	}
	cout<<ans<<'\n';
}





















