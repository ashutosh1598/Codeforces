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
#include"map"
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
const int maxn=1e6+5;
int d[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		int x;
		cin>>x;
		if(x==0)continue;
		d[max(1,i-x)]++;
		d[i]--;
	}
	int ans=0;
	for(int i=1;i<=n;++i)
	{
		d[i]+=d[i-1];
		if(d[i]==0)ans++;
	}
	cout<<ans<<'\n';
}
