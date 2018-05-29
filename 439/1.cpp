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
const int maxn=2e6+5;
//int exi[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	vector<int>xi(n),yi(n);
	set<int>my;
	for(int i=0;i<n;++i)
	{
		cin>>xi[i];
		my.insert(xi[i]);
		//exi[xi[i]]=1;
	}
	for(int i=0;i<n;++i)
	{
		cin>>yi[i];
		my.insert(yi[i]);
		//exi[yi[i]]=1;
	}
	ll ans=0;
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
		{
			//if(i==j)continue;
			//int pp=(xi[i]^yi[j]);
			if(xi[i]^yi[j]==1)
			{
				ans++;
				cout<<xi[i]<<' '<<yi[j]<<" num "<<(xi[i]^yi[j])<<'\n';
			}
		}
	}
	if(ans%2==1)
	{
		cout<<"Koyomi\n";
	}
	else cout<<"Karen\n";
}
