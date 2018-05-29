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
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	n--;
	int st=0;
	ll ans=0;
	while(n--)
	{
		if(st==0)
		{
			if(a<b)
			{
				st=1;
				ans+=a;
			}
			else
			{
				st=2;
				ans+=b;
			}
		}
		else if(st==1)
		{
			if(a<c)
			{
				st=0;
				ans+=a;
			}
			else
			{
				st=2;
				ans+=c;
			}
		}
		else
		{
			if(b<c)
			{
				st=0;
				ans+=b;
			}
			else
			{
				st=1;
				ans+=c;
			}
		}
	}
	cout<<ans<<'\n';
}


















