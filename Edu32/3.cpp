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
string s;
int n;
int pr[26][100000+5];
int ch(int k)
{
	//cout<<k<<" kkkk\n";
	for(int i=0;i<26;++i)
	{
		int ans=1;
		for(int j=0;j+k-1<n;++j)
		{
			int co=pr[i][j+k-1];
			if(j)co-=pr[i][j-1];
			if(co==0)
			{
				ans=0;
				break;
			}
		}
		//cout<<k<<' '<<i<<" k i \n";
		//cout<<ans<<'\n';
		if(ans==1)return true;
	}
	//cout<<"returning false\n";
	return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>s;
	n=s.length();
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<26;++j)
		{
			if(i)pr[j][i]+=pr[j][i-1];
		}
		pr[s[i]-'a'][i]++;
	}
	/*
	for(int i=0;i<n;++i)
		cout<<pr[0][i]<<'\n';
		*/
	int u=n;
	int l=1;
	while(l<u-1)
	{
		int m=(l+u)/2;
		if(ch(m))
		{
			u=m;
		}
		else l=m;
	}
	if(ch(l))cout<<l<<'\n';
	else cout<<u<<'\n';
}
