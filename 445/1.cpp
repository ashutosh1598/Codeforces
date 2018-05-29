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
int a[10];
int s=0;
void df(int i,int sum,int c)
{
	if(i==6)
	{
		if(c==3&&2*sum==s)
		{
			cout<<"YES\n";
			exit(0);
		}
		return;
	}
	df(i+1,sum,c);
	df(i+1,sum+a[i],c+1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	for(int i=0;i<6;++i)
	{
		cin>>a[i];
		s+=a[i];
	}
	df(0,0,0);
	cout<<"NO\n";
}
