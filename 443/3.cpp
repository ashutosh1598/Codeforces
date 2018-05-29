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
	vector<int>re(10,-1);
	int n;
	cin>>n;
	while(n--)
	{
		char ch;
		int x;
		cin>>ch>>x;
		int y=ch;
		if(y==38)
		{
			//cout<<x<<" and\n";
			for(int i=0;i<10;++i)
			{
				if(   (x&(1<<i))  ==0)
				{
					re[i]=0;
				}
			}
		}
		else if(y==94)
		{
			//cout<<x<<" xor\n";
			for(int i=0;i<10;++i)
			{
				if(x&(1<<i))
				{
					if(re[i]==-1)re[i]=-2;
					else if(re[i]==-2)re[i]=-1;
					else
					{
						re[i]=1-re[i];
					}
				}
			}
		}
		else if(y==124)
		{
			//cout<<x<<" or\n";
			for(int i=0;i<10;++i)
			{
				if(x&(1<<i))
				{
					re[i]=1;
				}
			}
		}
	}
	int or1=0;
	int an1=1023;
	int xor1=0;
	for(int i=0;i<10;++i)
	{
		if(re[i]==-2)
		{
			xor1=  xor1|(1<<i);
		}
		if(re[i]==1)
		{
			or1=  or1|(1<<i);
		}
		if(re[i]==0)
		{
			an1=  an1&   (~(1<<i));
		}
	}
	cout<<"3\n";
	cout<<"^ "<<xor1<<'\n';
	cout<<"& "<<an1<<'\n';
	cout<<"| "<<or1<<'\n';
}

















