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
	ll l,r;
	cin>>l>>r;
	if(l<r)
	{
		cout<<"2\n";
		return 0;
	}
	for(int i=2;i<=sqrt(l)+10;++i)
	{
		if(l%i==0)
		{
			cout<<i<<'\n';
			return 0;
		}
	}
	cout<<l<<'\n';
}
