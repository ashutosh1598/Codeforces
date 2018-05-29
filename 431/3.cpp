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
    cin.tie(NULL);
	ll k;
	cin>>k;
	if(k==0)
	{
		cout<<"a\n";
		return 0;
	}
	for(char ch='a';ch<='z';ch++)
	{
		if(k<=0)
			break;
		ll i;
		for(i=2;;++i)
		{
			if(i*(i-1)/2>k)
			{
				i--;
				break;
			}
		}
		k-=i*(i-1)/2;
		for(int j=0;j<i;++j)
		{
			cout<<ch;
		}
	}
	cout<<'\n';
}
