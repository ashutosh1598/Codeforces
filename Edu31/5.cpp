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
const int maxn=(1<<14)  +10;
int par[maxn],p1[maxn];
int find(int x)
{
	return par[x]==x?x:par[x]=find(par[x]);
}
void merge(int x,int y)
{
	par[find(x)]=find(y);
}
/*
int find(int x)
{
	return p1[x]==x?x:p1[x]=find(p1[x]);
}
void merge(int x.int y)
{
	p1[find(x)]=find(y);
}
*/
int n,m;
int arr[200];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>n>>m;
	for(char c='0';c<='9';++c)
	{
		arr[(int)c]=c-'0';
	}
	for(char c='A';c<='F';++c)
	{
		arr[(int)c]=10+c-'A';
	}
	for(int i=0;i<maxn;++i)
	{
		par[i]=i;
	}

	vector<bool>re(m+5,0);
	ll one=0,sub=0;
	for(int i=0;i<m/4;++i)
	{
		int in=4*i;
		char ch;
		cin>>ch;
		int x=arr[(int)ch];
		if(x&(1<<3))
		{
			re[in]=1;one++;
		}
		if(x&(1<<2))
		{
			re[in+1]=1;one++;
		}
		if(x&(1<<1))
		{
			re[in+2]=1;one++;
		}
		if(x&1)
		{
			re[in+3]=1;one++;
		}
	}
	for(int i=1;i<m;++i)
	{
		if(re[i-1]==1&&re[i]==1)
		{
			merge(i-1,i);
		}
	}
	vector<bool>tt(m+5,0);

	for(int i=1;i<n-1;++i)
	{
		for(int i=0;i<m/4;++i)
		{
			int in=4*i;
			char ch;
			cin>>ch;
			int x=arr[(int)ch];
			if(x&(1<<3))
			{
				tt[in]=1;one++;
			}
			if(x&(1<<2))
			{
				tt[in+1]=1;one++;
			}
			if(x&(1<<1))
			{
				tt[in+2]=1;one++;
			}
			if(x&1)
			{
				tt[in+3]=1;one++;
			}
		}

	}
}
