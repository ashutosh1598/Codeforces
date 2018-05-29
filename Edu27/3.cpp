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
struct sho
{
	int l,r;
	bool operator<(const sho & ob)const
	{
		return r==ob.r?l<ob.l:r<ob.r;
	}
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	vector<sho>rec(n);
	for(int i=0;i<n;++i)
	{
		int x,y;
		cin>>x>>y;
		rec[i].l=x;rec[i].r=y;
	}
	sort(all(rec));
	for(int i=0;i<n-2;++i)
	{
		if(rec[i].r>=rec[i+1].l&&rec[i].r>=rec[i+2].l)
		{
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
}















