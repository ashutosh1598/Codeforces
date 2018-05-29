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
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;++i)cin>>a[i];
	if(n<=2)
	{
		cout<<"0\n";
		exit(0);
	}
	int ans=0;
	for(int i=1;i<n-1;++i)
	{
		if(             (a[i]>a[i-1]&&a[i]>a[i+1]) || (a[i]<a[i-1]&&a[i]<a[i+1]))
		{
			ans++;
		}
	}
	cout<<ans<<'\n';
}
