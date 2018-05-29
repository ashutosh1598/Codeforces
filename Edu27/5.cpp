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
	ll n,m,k;
	cin>>n>>m>>k;
	ll inf=1e15;
	ll tl=inf,tr=inf,bl=inf,br=inf;
	ll north=inf,south=-1,west=inf,east=-1;
	for(int i=0;i<k;++i)
	{
		ll x,y;
		cin>>x>>y;
		north=min(north,x);
		south=max(south,x);
		east=max(east,y);
		west=min(west,y);
		tl=min(tl,max( x-1,y-1));
		tr=min(tr,max(x-1,m-y));
		bl=min(bl,max(n-x,y-1));
		br=min(br,max(n-x,m-x));
	}
	int mi1=min(tl,min(tr,min(bl,br)));
	int ma1=max(tl,min(tr,min(bl,br)));

}
