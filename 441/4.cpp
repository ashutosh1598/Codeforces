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
const int maxn=3e5+10;
int dp[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	dp[n+1]=1;
	cout<<"1 ";
	int rig=n+1;
	for(int i=1;i<=n;++i)
	{
		int pp;
		cin>>pp;
		dp[pp]=1;
		while(rig>0)
		{
			if(dp[rig-1]==1)
			{
				--rig;
			}
			else
			{
				break;
			}
		}
		cout<<i+1-(n+1-rig)<<' ';
	}
	cout<<'\n';
}
