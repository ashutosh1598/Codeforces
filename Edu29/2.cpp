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
	int n;
	cin>>n;
	vector<int>re(2*n);
	for(int i=0;i<2*n;++i)cin>>re[i];
	if(n==-1)
	{
		cout<<"0\n";
		return 0;
	}
	int sum=0;
	sort(all(re));
	for(int i=1;i<2*n;++i)
	{
		sum+=re[i]-re[i-1];
	}
	int f1=0,f2=0,s1=0,s2=0;
	s1=re[1]-re[0];
	f2=re[2*n-1]-re[2*n-2];
		s2=re[2]-re[1];
		f1=re[2*n-2]-re[2*n-3];
	cout<<min(sum-s1-f2,min(sum-s1-s2,sum-f1-f2))<<'\n';
}
