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
const int maxn=2e5+10;
ll a[maxn],fi[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n,s=0;
	cin>>n;
	priority_queue<pll,vector<pll>,greater<pll> >pq;
	for(int i=1;i<=n;++i)
	{
		pq.push(a[i],i);
		cin>>a[i];
		s+=a[i];
	}
	priority_queue<pll,vector<pll>,greater<pll> >pq;
	ll curr=1;
	ll sum=s;
	while(
}
