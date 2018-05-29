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
    //cin.tie(NULL);
	string x;
	cin>>x;
	int len=x.length();
	int le=0,ri=len-1;
	string tem(len,'0');
	cout<<"? "<<tem<<'\n';
	fflush(stdout);
	int prev;
	cin>>prev;
	while(1)
	{
		string qq("0",len);
		for(int i=le;i<=ri;++i)
		{
			qq[i]='1';
		}
		int sl=ri-le+1;
		cout<<"? "<<qq<<'\n';
		fflush(stdout);
		int now;
		if(now-len==sl)
		{

		}
	}
}


















