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
const int maxn=105;
int en[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,q;
	cin>>n>>q;
	mset(en,-1);
	for(int j=0;j<q;++j)
	{
		int t,k,l;
		cin>>t>>k>>l;
		int sum=0,sumid=0;
		bool a=false;
		for(int i=1;i<=n;++i)
		{
			if(t>en[i])
			{
				sum++;
				sumid+=i;
			}
			if(sum==k)
			{
				a=true;
				break;
			}
		}
		if(!a)
		{
			cout<<"-1\n";
		}
		else
		{
			cout<<sumid<<'\n';
			int c=0;
			for(int i=1;i<=n;++i)
			{
				if(t>en[i])
				{
					en[i]=t+l-1;
					c++;
				}
				if(c==k)
				{
					break;
				}
			}
		}
	}
}







