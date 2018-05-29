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
	vector<pair<int,int> >re(n);
	for(int i=0;i<n;++i)
	{
		cin>>re[i].ff;
		re[i].ss=i;
	}
	if(n==1)
	{
		cout<<re[0].ff<<'\n';
		return 0;
	}
	sort(all(re));
	vector<int>b(n,-1);
	for(int i=0;i<n-1;++i)
	{
		b[re[i].ss]=re[i+1].ff;
	}
	b[re[n-1].ss]=re[0].ff;
	for(int i=0;i<n;++i)
	{
		cout<<b[i]<<' ';
	}
	cout<<'\n';

}
