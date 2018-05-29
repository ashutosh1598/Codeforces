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
	string x;
	cin>>x;
	int n=x.length();
	char ch=x[0];
	int co=0;
	vector<pair< char,int> >pp;
	for(int i=0;i<n;++i)
	{
		if(x[i]==ch)
		{
			co++;
		}
		else
		{
			pp.pb(mp(ch,co));
			ch=x[i];
			co=1;
		}
	}
	if(co>0)
	{
		pp.pb(mp(ch,co));
	}
	int nn=pp.size();
	if(nn==1)
	{
		cout<<n<<'\n';
		return 0;
	}
	/*
	int ans=-1;
	for(int i=0;i<nn;++i)
	{
		auto te=pp[i];
		if(te.ff=='a')continue;
		else
		{
			int an=te.ss;
			if(i>0)
			{
				an+=pp[i-1].ss;
			}
			if(i<nn-1)
			{
				an+=pp[i+1].ss;
			}
			ans=max(an,ans);
		}
	}
	cout<<ans<<'\n';
	*/
	vector<int> prb(n+5,0),pra(n+5,0);
	for(int i=0;i<n;++i)
	{
		if(i>0)
		{
			pra[i]=pra[i-1];
			prb[i]=prb[i-1];
		}
		if(x[i]=='a')
		{
			pra[i]++;
		}
		else
		{
			prb[i]++;
		}
	}
	int ans=-1;
	for(int i=0;i<n;++i)
	{
		for(int j=i;j<n;++j)
		{
			int bc=prb[j];
			if(i>0)bc-=prb[i-1];
			int af=0;
			if(i>0)
				af=pra[i-1];
			int al=pra[n-1]-pra[j];
			ans=max(ans,bc+af+al);
		}
	}
	cout<<ans<<'\n';
}




























