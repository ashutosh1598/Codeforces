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
const int maxn=2e5+5;
ll tou[maxn];
ll rec[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	set<ll>my1,my;
	map<ll,ll>mm;
	for(int i=1;i<=n;++i)
	{
		cin>>rec[i];
		my1.insert(rec[i]);
		mm[rec[i]]++;
	}
	for(int i=1;i<=n;++i)
	{
		if(my1.find(i)==my1.end())
			my.insert(i);
	}
	int ans=0;
	for(int i=1;i<=n;++i)
	{
		if(mm[rec[i]]>1)
		{			
			if(tou[rec[i]]!=1&&*my.begin()>rec[i])
			{
				tou[rec[i]]=1;
				continue;
			}
			else
			{
				mm[rec[i]]--;
				rec[i]=*my.begin();
				ans++;
				my.erase(my.begin());
			}
		}
	}
	cout<<ans<<'\n';
	for(int i=1;i<=n;++i)
	{
		if(i-1)cout<<' ';
		cout<<rec[i];
	}
	cout<<'\n';
}












