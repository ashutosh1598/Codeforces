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
ll rec[110][110][11];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n,q,c;
	cin>>n>>q>>c;
	for(int i=0;i<n;++i)
	{
		int x,y,s;
		cin>>x>>y>>s;
		for(int t=0;t<=c;++t)
		{
			rec[x][y][t]+=(s+t)%(c+1);
		}
	}
	for(int t=0;t<=c;++t)
	{
		for(int i=1;i<=100;++i)
		{
			for(int j=1;j<=100;++j)
			{
				rec[i][j][t]+=rec[i-1][j][t]   +    rec[i][j-1][t]   -    rec[i-1][j-1][t];
			}
		}
	}
	while(q--)
	{
		int t,x1,y1,x2,y2;
		cin>>t>>x1>>y1>>x2>>y2;
		t%=c+1;
		ll ans=rec[x2][y2][t]+rec[x1-1][y1-1][t]    -     rec[x2][y1-1][t]  -   rec[x1-1][y2][t];
		cout<<ans<<'\n';
	}
}










