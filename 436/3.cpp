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
ll a,b,f,k;
//ll dip[100000];
bool check()
{
	if(f>b||a-f>b)
	{
		return false;
	}
	if(k>1)
	{
		if(b<2*(a-f))
		{
			return false;
		}
	}
	if(k>2)
	{
		if(b<2*f)
		{
			return false;
		}
	}
	return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>a>>b>>f>>k;
	if(!check())
	{
		cout<<"-1\n";
		return 0;
	}
	ll st=0;
	ll ans=0;
	ll cur=b;
	ll k1=k;
	for(int i=0;i<k;++i)
	{
		--k1;
		if(st==0)
		{
			cur-=f;
			if(k1>0&&cur<2*(a-f))
			{
				cur=b;
				ans++;
			}
			if(k1==0&&cur<a-f)
			{
				cur=b;
				ans++;
			}
			cur-=a-f;
			st=1;
		}
		else if(st==1)
		{
			cur-=(a-f);
			if(k1>0&&cur<2*f)
			{
				cur=b;
				ans++;
			}
			if(k1==0&&cur<f)
			{
				cur=b;
				ans++;
			}
			cur-=f;
			st=0;
		}
	}
	cout<<ans<<'\n';
}
















