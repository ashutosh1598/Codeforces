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
ll solve(ll n)
{
		if(n==1||n==2||n==3||n==5||n==7)
		{
			return -1;
		}
		if(n==4||n==6||n==9)
		{
			return 1;
		}
		if(n==8)
		{
			return 2;
		}
		if(n%2==1)
		{
			n-=9;
			ll t=solve(n);
			if(t==-1)
			{
				return -1;
			}
			else
			{
				return 1+t;
			}
		}
		if(n%4==0)
		{
			return n/4;
		}
		else
		{
			return 1+ (n-6)/4;
		}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll q;
	cin>>q;
	while(q--)
	{
		ll n;
		cin>>n;
		ll tt=solve(n);
		cout<<tt<<'\n';
	}
}








