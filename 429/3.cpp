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
const int maxn=2e5+10;
int a[maxn],c[maxn];
pii b[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;++i)
	{
		int x;
		cin>>x;
		b[i]=mp(x,i);
	}
	sort(b,b+n);
	for(int i=0;i<n;++i)
	{
		c[b[i].ss]=a[n-1-i];
	}
	for(int i=0;i<n;++i)
	{
		cout<<c[i]<<' ';
	}
	cout<<'\n';
}
