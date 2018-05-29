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
int n;
void ed()
{
	for(int i=2;i<=n;i+=2)
	{
		cout<<i<<' ';
	}
}
void od()
{
	for(int i=1;i<=n;i+=2)
	{
		cout<<i<<' ';
	}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>n;
	cout<<(n/2)*2+ (n+1)/2<<'\n';;
	ed();
	od();
	ed();
	cout<<'\n';
}
