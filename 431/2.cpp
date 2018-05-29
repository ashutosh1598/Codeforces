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
ll y[1010];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>y[i];
	}
	vector<ll>dif(n-1);
	for(int i=2;i<=n-1;++i)
	{
		dif[i-2]=y[i]-y[i-1];
	}
	set<ll>my(all(dif));
	int qq=my.size();
	cout<<qq<<" size\n";
	if(qq>3||qq<=1)
	{
		cout<<"No\n";
		return 0;
	}
	cout<<"Yes\n";

}
