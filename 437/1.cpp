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
	int n;
	string x;
	cin>>n>>x;
	ll a1=0,a2=0;
	for(int i=1;i<n;++i)
	{
		if(x[i-1]=='S'&&x[i]=='F')
		{
			a2++;
		}
		if(x[i-1]=='F'&&x[i]=='S')
		{
			a1++;
		}
	}
	if(a2>a1)
	{
		cout<<"YES\n";
	}
	else cout<<"NO\n";
}
