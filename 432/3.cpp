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
const int maxn=1e3+5;
ll r[maxn][5];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<5;++j)
		{
			cin>>r[i][j];
		}
	}
	if(n==1)
	{
		cout<<"1\n1\n";
		return 0;
	}
	if(n==2)
	{
		cout<<"2\n1\n2\n";
		return 0;
	}
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
		{

		}
	}
}
