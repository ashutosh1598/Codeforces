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
	string x;
	cin>>x;
	int n=x.length();
	ll ans=0;
	for(int i=0;i<n;++i)
	{
		if(x[i]!='Q')continue;
		for(int j=i+1;j<n;++j)
		{
			if(x[j]!='A')continue;
			for(int k=j+1;k<n;++k)
			{
				if(x[k]=='Q')ans++;
			}
		}
	}
	cout<<ans<<'\n';
}
