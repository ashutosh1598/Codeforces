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
	ll n,p,q,r;
	cin>>n>>p>>q>>r;
	//ll ma=-1e18,mi=1e18;
	ll a1=0,a2=0,a3=0;
	vector<ll>re(n);
	for(int i=0;i<n;++i)
	{
		cin>>re[i];
	}
	//a1=re[0]*p;a2=re[0]*q;a3=re[0]*r;
	vector<ll>xm(n),ym(n),zm(n);
	xm[0]=p*re[0];ym[0]=(p+q)*re[0],zm[0]=(p+q+r)*re[0];
	for(int i=1;i<n;++i)
	{
		xm[i]=max(xm[i-1],p*re[i]);
		ym[i]=max(ym[i-1],q*re[i]+xm[i]);
		zm[i]=max(zm[i-1],r*re[i]+ym[i]);
	}
	cout<<zm[n-1]<<'\n';
}
