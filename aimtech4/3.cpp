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
int par[100005];
int find(int x)
{
	return par[x]==x?x:par[x]=find(par[x]);
}
void merge(int x,int y)
{
	par[find(x)]=find(y);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	vector<pii>re(n);
	for(int i=0;i<n;++i)
	{
		par[i]=i;
		cin>>re[i].ff;
		re[i].ss=i;
	}
	sort(all(re));
	for(int i=0;i<n;++i)
	{
		if(find(i)!=find(re[i].ss))
		{
			merge(i,re[i].ss);
		}
	}
	vector<list<int> >ans(n);
	vector<int>roo(n,0);
	int kk=0;
	for(int i=0;i<n;++i)
	{
		if(par[i]==i)
		{
			roo[i]=1;
			kk++;
		}
		ans[find(i)].pb(i);
	}
	cout<<kk<<'\n';
	for(int i=0;i<n;++i)
	{
		if(ans[i].size()>0)
		{
			cout<<ans[i].size()<<' ';
			for(int x:ans[i])
			{
				cout<<x+1<<' ';
			}
			cout<<'\n';
		}
	}
}












