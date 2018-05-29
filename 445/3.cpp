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
int t[maxn];
int doo[maxn];
int re[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;cin>>n;
	for(int i=1;i<=n;++i)cin>>t[i];
	if(n==1)
	{
		cout<<"1\n";exit(0);
	}
	//doo[1]=0;
	//re[0]=1;
	int cu=1;
	set<int>my;
	my.insert(0);
	for(int i=1;i<=n;++i)
	{
		int x=t[i];
		if(my.find(x)!=my.end())
		{
			//int door=re[x];
			//doo[door]=i;
			//re[i]=door;
			my.erase(x);
			my.insert(i);
		}
		else
		{
			cu++;
			//re[i]=cu;
			//doo[cu]=i;
			my.insert(i);
		}
	}
	cout<<cu<<'\n';
}














