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
const int maxn=1010;
int n,m,k;
int re[maxn][maxn],tou[maxn][maxn],lay[maxn][maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>n>>m>>k;
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<m;++j)
		{
			char ch;
			cin>>ch;
			if(ch=='#')
			{
				re[i][j]=1;
			}
		}
	}
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	x1--;y1--;x2--;y2--;
	if(x1==x2&&y1==y2)
	{
		cout<<"0\n";
		return 0;
	}
	lay[x1][y1]=0;
	tou[x1][y1]=1;
	queue<pii>qq;
	qq.push(mp(x1,y1));
	int cur=0;
	while(!qq.empty())
	{
		pii a=qq.front();
		qq.pop();
		if(lay[a.ff][a.ss]==cur)cur++;
		if(a.ff==x2&&a.ss==y2)
		{
			break;
		}
		for(int i=a.ff+1;i<n;++i)
		{
			if(i-a.ff>k)break;
			if(re[i][a.ss])break;
			if(tou[i][a.ss])continue;
			lay[i][a.ss]=cur;
			tou[i][a.ss]=1;
			qq.push(mp(i,a.ss));
		}
		for(int i=a.ff-1;i>=0;--i)
		{
			if(a.ff-i>k)break;
			if(re[i][a.ss])break;
			if(tou[i][a.ss])continue;
			lay[i][a.ss]=cur;
			tou[i][a.ss]=1; 
			qq.push(mp(i,a.ss));
		}
		for(int j=a.ss+1;j<m;++j)
		{
			if(j-a.ss>k)break;
			if(re[a.ff][j])break;
			if(tou[a.ff][j])continue;
			lay[a.ff][j]=cur;
			tou[a.ff][j]=1; 
			qq.push(mp(a.ff,j));
		}
		for(int j=a.ss-1;j>=0;--j)
		{
			if(a.ss-j>k)break;
			if(re[a.ff][j])break;
			if(tou[a.ff][j])continue;
			lay[a.ff][j]=cur;
			tou[a.ff][j]=1; 
			qq.push(mp(a.ff,j));
		}
	}
	int ans=lay[x2][y2];
	if(ans==0)
	{
		cout<<"-1\n";
	}
	else
	{
		cout<<ans<<'\n';
	}
}



































