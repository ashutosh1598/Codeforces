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
	ll n,k;
	cin>>n>>k;
	ll cur=0;
	ll bb=0;
	for(int i=0;i<n;++i)
	{
		ll a;
		cin>>a;
		cur=cur+a;
		ll give=min(8LL,cur);
		bb+=give;
		cur-=give;
		if(bb>=k)
		{
			cout<<i+1<<'\n';
			return 0;
		}
	}
	cout<<"-1\n";
}
