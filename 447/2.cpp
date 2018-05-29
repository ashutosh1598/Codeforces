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
const ll mo=1e9+7;
ll ex(ll x, ll n)
{
	if(n==0)return 1LL;
	if(n%2==0)return ex( (x*x)%mo,n/2);
	return (x*ex(  (x*x)%mo,n/2))%mo;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n,m,k;
	cin>>n>>m>>k;
	if((n+m)%2==1&&k==-1)
	{
		cout<<"0\n";
		return 0;
	}
	n--;m--;
	ll pp=1e9+6;
	n%=pp;
	m%=pp;

	cout<<ex(2,(n*m)%pp)<<'\n';

}











