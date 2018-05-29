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
	ll r,d,n;
	cin>>r>>d>>n;
	int ans=0;
	ld eps=1e-7;
	while(n--)
	{
		ld x,y,r1;
		cin>>x>>y>>r1;
		ld d1=sqrt(x*x+y*y);
		bool aa=true;
		if(d1+r1>r+eps)aa=false;
		if(d1-r1<r-d-eps)aa=false;
		if(aa)ans++;
	}
	cout<<ans<<'\n';
}
