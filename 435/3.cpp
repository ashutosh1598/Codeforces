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
int po=1<<18;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,x;
	cin>>n>>x;
	int zn=0;
	if(n==1)
	{
		cout<<"YES\n"<<x<<'\n';
		return 0;
	}
	else if(n==2)
	{
		if(x==0)
		{
			cout<<"NO\n";
			return 0;
		}
		else
		{
			cout<<"YES\n0 "<<x<<'\n';
			return 0;
		}
	}
	cout<<"YES\n";
	for(int i=1;i<=n-3;++i)
	{
		zn=(zn^i);
		cout<<i<<' ';
	}
	if(x==zn)
	{
		cout<<(po^(2*po))<<' '<<po<<' '<<2*po<<'\n';
	}
	else
	{
		cout<<po<<' '<<(po^x^zn)<<" 0\n";
	}
}



























