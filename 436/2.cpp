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
bool low(char c)
{
	int x=c-'a';
	if(x>=0&&x<=25)
		return true;
	return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int zzz;cin>>zzz;
	string x;
	cin>>x;
	int le=x.length();
	vector<int>re(le,0);
	for(int i=0;i<le;++i)
	{
		if(low(x[i]))
			re[i]=1;
	}
	int cur=0;
	set<char>my;
	for(int i=0;i<le;++i)
	{
		if(re[i])
		{
			cur++;
			my.insert(x[i]);
		}
		else
		{
			cur=0;
			my.clear();
		}
		re[i]=my.size();
	}
	int ans=-1;
	for(int i=0;i<le;++i)
	{
		ans=max(ans,re[i]);
	}
	cout<<ans<<'\n';
}
