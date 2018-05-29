#include"iostream"
#include"cmath"
#include"vector"
#include"algorithm"
#include"list"
#include"set"
#include"unordered_set"
#include"map"
#include"unordered_map"
#include"string"
#include"cstring"
#include"iomanip"
using namespace std;
typedef long long ll;
const ll maxn=2e5+5;
ll diff[maxn],pre[maxn];
int main()
 {
		//ios_base::sync_with_stdio(false);
		ll n,k,q;cin>>n>>k>>q;
		for(int i=1;i<=n;++i)
		{
			ll x,y;cin>>x>>y;
			diff[x]++;diff[y+1]--;
		}
		for(int i=1;i<maxn;++i)
		{
			diff[i]+=diff[i-1];
		}
		for(int i=0;i<maxn;++i)
		{
			if(diff[i]<k)diff[i]=0;
			else diff[i]=1;
		}
		for(int i=1;i<maxn;++i)
		{
			pre[i]=diff[i]+pre[i-1];
		}
		for(int i=0;i<q;++i)
		{
			ll x,y;cin>>x>>y;
			cout<<pre[y]-pre[x-1]<<'\n';
		}
}
