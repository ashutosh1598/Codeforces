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
int a[30];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,k;
	cin>>n>>k;
	string x;
	cin>>x;
	for(int i=0;i<x.length();++i)
	{
		a[x[i]-'a']++;
	}
	for(int i=0;i<26;++i)
	{
		if(a[i]>k)
		{
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
}
