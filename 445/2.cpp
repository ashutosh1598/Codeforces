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
const int maxn=2e5+10;
int ti[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	mset(ti,-1);
	for(int i=0;i<n;++i)
	{
		int x;
		cin>>x;
		ti[x]=i;
	}
	int mi=1e8,pos=-1;
	for(int i=0;i<=2e5+3;++i)
	{
		if(ti[i]==-1)continue;
		if(ti[i]<mi)
		{
			mi=ti[i];
			pos=i;
		}
	}
	cout<<pos<<'\n';
}
