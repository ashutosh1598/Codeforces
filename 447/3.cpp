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
int gcd(int x,int y)
{
	return y==0?x:gcd(y,x%y);
}
int re[1010],m;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>m;
	list<int>pp;
	set<int>my;
	for(int i=0;i<m;++i)
	{
		cin>>re[i];
	}

	for(int i=1;i<m;++i)
	{
		if(re[i]%re[0]!=0)
		{
			cout<<"-1\n";
			return 0;
		}
	}
	cout<<2*m<<'\n';
	for(int i=0;i<m;++i)
	{
		cout<<re[i]<<' '<<re[0]<<' ';
	}
	cout<<'\n';
}











