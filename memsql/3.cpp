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
const ll maxn=60;
ll re[maxn];
ll dp[maxn][2];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n;
	cin>>n;
	ll tot=0;
	for(int i=1;i<=n;++i)
	{
		cin>>re[i];
		tot+=re[i];
	}
	dp[n][0]=re[n];
	dp[n][1]=0;
	for(int i=n-1;i>=1;--i)
	{
		dp[i][0]=max(re[i]+dp[i+1][1],dp[i+1][0]);
		dp[i][1]=min(dp[i+1][0],re[i]+dp[i+1][1]);
	}
	cout<<tot-dp[1][0]<<' '<<dp[1][0]<<'\n';
}
