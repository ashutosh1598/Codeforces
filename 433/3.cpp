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
const int maxn=3e5+5;
int cost[maxn];
int tim[maxn];
list<int>rec[300005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;++i)
	{
		cin>>cost[i];
		rec[max(1+k,i)].pb(i);
	}
	set<pii>my;
	ll tot=0;
	int flig=0;
	for(int i=k+1;i<=k+n;++i)
	{
		if(i<=n+1)
		{
			for(int id:rec[i])
			{
				my.insert(mp(cost[id],id));
			}
		}

			flig++;
			auto it=my.end();
			it--;
			pii jj=*it;
			my.erase(it);
			int id=jj.ss;
			tim[id]=i;
			tot+=1LL*cost[id]*(i-id);

		if(flig==n)
			break;
	}
	cout<<tot<<'\n';
	for(int i=1;i<=n;++i)
	{
		cout<<tim[i]<<' ';
	}
	cout<<'\n';
}
