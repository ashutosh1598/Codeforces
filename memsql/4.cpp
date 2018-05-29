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
const int maxn=70;
int sp[maxn][8];
int pro[maxn][maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	int nn=1<<n;
	for(int i=1;i<=nn;++i)for(int j=1;j<=nn;++j)cin>>pro[i][j];
	/*
	for(int i=1;i<=nn;++i)
	{
		sp[i][0]=i;
	}
	for(int i=1;(1<<i)<=nn;++i)
	{
		int le=(1<<(i-1));
		for(int j=1;j+(1<<i)-1<=nn;++j)
		{
			int x=sp[j][i-1],y=sp[j+le][i-1];
			if(pro[x][y]>=50)
			{
				sp[j][i]=x;
			}
			else sp[j][i]=y;
		}
	}
	*/
	list<pair<int,ld> >rr;
	for(int i=1;i<=nn;++i)
	{
		rr.pb(mp(i,1));
	}
	ld ans=0;
	for(int i=1;i<=n;++i)
	{
		auto it=rr.begin();
		list<pair<int,ld> >pp;
		ld val=i;
		while(it!=rr.end())
		{
			auto xx=*it;
			it++;
			auto yy=*it;
			it++;
			int p1=xx.ff,p2=yy.ff;
			ld pr=0;
			if(xx.ss*pro[p1][p2]>=yy.ss*pro[p2][p1])
			{
				pr=xx.ss*pro[p1][p2]/100;
				pp.pb(mp(p1,pr));
			}
			else
			{
				pr=yy.ss*pro[p2][p1]/100;
				pp.pb(mp(p2,pr));
			}
			ans+=val*pr;
		}
		rr.clear();
		rr.assign(all(pp));
	}
	cout<<fixed<<setprecision(10);
	cout<<ans<<'\n';
}
























