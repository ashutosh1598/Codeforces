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
	int n;
	cin>>n;
	vector<list<int> >re(n);
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<6;++j)
		{
			int x;
			cin>>x;
			re[i].pb(x);
		}
	}
	set<int>my;
	if(n==1)
	{
		for(int i:re[0])
		{
			my.insert(i);
		}
	}
	if(n==2)
	{
		for(int i:re[0])
		{
			my.insert(i);
			for(int j:re[1])
			{
				my.insert(i*10+j);
			}
		}
		for(int i:re[1])
		{
			my.insert(i);
			for(int j:re[0])
			{
				my.insert(i*10+j);
			}
		}
	}
	if(n==3)
	{
		for(int i:re[0])
		{
			my.insert(i);
			for(int j:re[1])
			{
				my.insert(10*i+j);
				for(int k:re[2])
				{
					my.insert(i*100+j*10+k);
				}
			}
		}
		for(int i:re[0])
		{
			my.insert(i);
			for(int j:re[2])
			{
				my.insert(10*i+j);
				for(int k:re[1])
				{
					my.insert(i*100+j*10+k);
				}
			}
		}
		for(int i:re[1])
		{
			my.insert(i);
			for(int j:re[0])
			{
				my.insert(10*i+j);
				for(int k:re[2])
				{
					my.insert(i*100+j*10+k);
				}
			}
		}
		for(int i:re[1])
		{
			my.insert(i);
			for(int j:re[2])
			{
				my.insert(10*i+j);
				for(int k:re[0])
				{
					my.insert(i*100+j*10+k);
				}
			}
		}
		for(int i:re[2])
		{
			my.insert(i);
			for(int j:re[1])
			{
				my.insert(10*i+j);
				for(int k:re[0])
				{
					my.insert(i*100+j*10+k);
				}
			}
		}
		for(int i:re[2])
		{
			my.insert(i);
			for(int j:re[0])
			{
				my.insert(10*i+j);
				for(int k:re[1])
				{
					my.insert(i*100+j*10+k);
				}
			}
		}
	}
	int i=0;
	while(my.find(i+1)!=my.end())
	{
		++i;
	}
	cout<<i<<'\n';
}

















