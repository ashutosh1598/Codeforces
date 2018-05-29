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
	ll n,k;
	cin>>n>>k;
	ll e4=n,e2=2*n,e1=0;
	for(int i=0;i<k;++i)
	{
		ll a;
		cin>>a;

		ll x,y;

		
		x=min(a,e1);
		a-=x;
		e1-=x;



		x=min(a,4*e4);
		y=x%4;
		e4-=x/4;
		if(y>=1)
			e4--;
		a-=x;
		if(y==1)
			e2++;
		if(y==2)
			e1++;
		if(y==3)
		{
			;
		}

x=min(a,2*e2);
		y=x%2;
		a-=x;
		e2-=x/2+y;




		if(a>0)
		{
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
}












