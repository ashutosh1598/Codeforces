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
const int maxn=2e5+100;
struct da
{
	int n,p,xt;
	bool operator<(const da & ob)const
	{
		return xt<ob.xt;
	}
}
list<da>rec[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,w,h;
	cin>>n>>w>>h;
	const shif=99999;
	vector<da>yax;
	for(int i=0;i<n;++i)
	{
		int g,p,t;
		cin>>g>>p>>t;
		da ob;
		ob.n=i;
		ob.p=p;
		ob.xt=p-t;
		if(g==1)
			rec[xt+shif].pb(ob);
		else yax.pb(ob);
	}

}












