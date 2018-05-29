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
	string s;
	cin>>s;
	int n=s.length();
	int pos=-1;
	for(int i=0;i<n;++i)
	{
		if(s[i]=='1')
		{
			pos=i;
			break;
		}
	}
	if(pos==-1)
	{
		cout<<"no\n";
		return 0;
	}
	int co=0;
	for(int i=pos+1;i<n;++i)
	{
		if(s[i]=='0')
		{
			co++;
		}
	}
	if(co>=6)
	{
		cout<<"yes\n";
	}
	else
	{
		cout<<"no\n";
	}
}










