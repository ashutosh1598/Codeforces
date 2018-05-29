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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,x;
	cin>>n>>x;
	set<int>my;
	for(int i=0;i<n;++i)
	{
		int a;
		cin>>a;
		my.insert(a);
	}
	int f=0;
	int ans=0;
	while(f<x)
	{
		if(my.find(f)==my.end())
		{
			ans++;
		}
		f++;
	}
	if(my.find(x)!=my.end())
	{
		ans++;
	}
	cout<<ans<<'\n';
}
