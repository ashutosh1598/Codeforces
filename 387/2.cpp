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
	int n;
	string x;
	cin>>n>>x;
	int ca=0,cc=0,cg=0,ct=0,qu=0;
	for(int i=0;i<n;++i)
	{
		switch(x[i])
		{
			case 'A':
				ca++;
				break;
			case 'C':
				cc++;
				break;
			case 'G':
				cg++;
				break;
			case 'T':
				ct++;
				break;
			default:
				qu++;
		}
	}
	if(n%4!=0)
	{
		cout<<"===\n";
		return 0;
	}
	int eac=n/4;
	int la=eac-ca,lc=eac-cc,lg=eac-cg,lt=eac-ct;
	if(la<0||lc<0||lg<0||lt<0)
	{
		cout<<"===\n";
		return 0;
	}
	for(int i=0;i<n;++i)
	{
		if(x[i]!='?')
		{
			cout<<x[i];
			continue;
		}
		if(la-->0)
		{
			cout<<'A';
			continue;
		}
		if(lc-->0)
		{
			cout<<'C';
			continue;
		}
		if(lg-->0)
		{
			cout<<'G';
			continue;
		}
		if(lt-->0)
		{
			cout<<'T';
			continue;
		}
	}
	cout<<'\n';
}









