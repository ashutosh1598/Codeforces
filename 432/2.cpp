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
	ll a1,a2,b1,b2,c1,c2;
	cin>>a1>>a2>>b1>>b2>>c1>>c2;
	ll d1=(a1-b1)*(a1-b1)+(a2-b2)*(a2-b2);
	ll d2=(b1-c1)*(b1-c1)+(b2-c2)*(b2-c2);
	if(  (   (a2-b2)*(b1-c1) == (a1-b1)*(b2-c2)  ) || d1!=d2)
	{
		cout<<"No\n";
		return 0;
	}
	cout<<"Yes\n";
}
