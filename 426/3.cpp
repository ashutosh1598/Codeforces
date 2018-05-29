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
ll gcd(ll a,ll b)
{
	return b==0?a:gcd(b,a%b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	while(n--)
	{
		ll a,b;
		cin>>a>>b;
		ll k=(0.6+cbrt(a*b));
		//cout<<k<<" k\n";
		if(a*b==k*k*k)
		{
			if(gcd(a,b)%k==0)
			{
				cout<<"Yes\n";
			}
			else cout<<"No\n";
		}
		else cout<<"No\n";
	}
}
