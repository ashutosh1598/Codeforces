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
int rec[100][100];
int rw[100],cw[100];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<m;++j)
		{
			int x;cin>>x;
			if(x==0)
			{
				rw[i]++;
				cw[j]++;
			}
			rec[i][j]=x;
		}
	}
	ll ans=-n*m;
	for(int i=0;i<n;++i)
	{
		ans+=(1LL<<rw[i])-1+(1LL<<(m-rw[i]))-1;
	}
	for(int i=0;i<m;++i)
	{
		ans+=(1LL<<cw[i])-1+(1LL<<(n-cw[i]))-1;
	}
	cout<<ans<<'\n';
}









