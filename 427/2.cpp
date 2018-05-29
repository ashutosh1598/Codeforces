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
int nod[10];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll k;
	cin>>k;
	string x;
	cin>>x;
	ll sum=0;
	for(int i=0;i<x.length();++i)
	{
		int d=x[i]-'0';
		sum+=d;
		nod[d]++;
	}
	ll ans=0;
	for(int d=0;d<=8;++d)
	{
		if(sum>=k)
			break;
		ll c=nod[d];
		ll left=k-sum;
		if(left>=(9-d)*c)
		{
			sum+=(9-d)*c;
			ans+=c;
		}
		else
		{
			ans+=(left+(9-d)-1)/(9-d);
			break;	
		}
	}
	cout<<ans<<'\n';
}
