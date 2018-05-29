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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n,k,m;
	cin>>n>>m>>k;
	list<pll>pp;
	int cu=0,st=-1;
	for(int i=0;i<n;++i)
	{
		int x;
		cin>>x;
		if(x==st)
		{
			cu++;
			pp.pb(mp(x,cu));


			if(cu==k)
			{
				int te=k;
				while(te--)
				{
					pp.pop_back();
				}
			}
			if(pp.empty())
			{
				cu=0;st=-1;
			}
			else
			{
				auto it=pp.end();
				it--;
				cu=(*it).ss;
				st=(*it).ff;
			}
		}
		else
		{
			st=x;
			cu=1;
			pp.pb(mp(x,cu));
		}
	}
	int nn=pp.size();
	vector<ll>re;
	for(auto xx:pp)
	{
		re.pb(xx.ff);
	}
		
}

