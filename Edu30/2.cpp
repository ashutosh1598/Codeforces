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
int dp[maxn];
int lpos[3*maxn],rpos[3*maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	string x;
	cin>>n>>x;
	for(int i=1;i<=n;++i)
	{
		x[i-1]=='0'?dp[i]=-1:dp[i]=1;
		dp[i]+=dp[i-1];
	}
	int shif=1e5+5;
	for(int i=0;i<3*maxn;++i)
	{
		lpos[i]=1e8;
		rpos[i]=-1;
	}
	for(int i=0;i<=n;++i)
	{
		lpos[  dp[i]+shif]=min(i,lpos[ dp[i]+shif]);
		rpos[  dp[i]+shif]=max(i,rpos[ dp[i]+shif]);
	}
	int ans=0;
	for(int i=0;i<3*maxn;++i)
	{
		if(lpos[i]==1e8||rpos[i]==-1)
		{
			continue;
		}
		else
		{
			ans=max(ans,rpos[i]-lpos[i]);
		}
	}
	cout<<ans<<'\n';
}


















