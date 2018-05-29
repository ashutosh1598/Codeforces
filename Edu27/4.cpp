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
int lim[301];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	int sp=0;
	int overt=0;
	int splim=1e7;
	int fault=0;
	int s;
	for(int i=0;i<n;++i)
	{
		int ch;
		cin>>ch;
		switch(ch)
		{
			case 1:
				cin>>s;
				for(int i=1;i<s;++i)
				{
					fault+=lim[i];
					lim[i]=0;
				}
				sp=s;
				break;
			case 2:
				if(overt>0)
					fault+=overt;
				overt=0;
				break;
			case 3:
				cin>>s;
				splim=s;
				lim[s]++;
				if(sp>splim)
				{
					fault++;
					lim[s]--;
				}
				break;
			case 4:
				overt=0;
				break;
			case 5:
				//nolim=1;
				//splim=1e7;
				mset(lim,0);
				break;
			case 6:
				overt++;
				break;
		}
	}
	cout<<fault<<'\n';
}
