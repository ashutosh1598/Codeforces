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
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<ll>r(n);
		for(int i=0;i<n;++i)
			cin>>r[i];
		ll ans=0;
		for(int i=0;i<n;++i)
		{
			for(int j=i;j<n;++j)
			{
				ll pr=1,sum=0;
				for(int k=i;k<=j;++k)
				{
					pr*=r[k];
					sum+=r[k];
				}
				if(pr==sum)
					ans++;
			}
		}
		cout<<ans<<'\n';
	}
}
