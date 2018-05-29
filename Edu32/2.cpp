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
	int l=0,d=0,u=0,r=0;
	int n;
	cin>>n;
	string x;
	cin>>x;
	for(int i=0;i<x.length();++i)
	{
		if(x[i]=='U')u++;
		if(x[i]=='D')d++;		
		if(x[i]=='L')l++;		
		if(x[i]=='R')r++;
	}
	int v=abs(l-r),y=abs(u-d);
	cout<<x.length()-v-y<<'\n';
}
