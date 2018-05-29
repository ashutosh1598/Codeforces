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
	string x;
	cin>>x;
	char a=x[0],b=x[1];
	int n;
	cin>>n;
	int fou=false;
	set<char>st,en;
	for(int i=0;i<n;++i)
	{
		string y;
		cin>>y;
		if(x==y)fou=true;
		st.insert(y[0]);
		en.insert(y[1]);
	}
	if(fou)
	{
		cout<<"yes\n";return 0;
	}
	if(en.find(a)!=en.end()&&st.find(b)!=st.end())
	{
		cout<<"yes\n";
		return 0;
	}
	cout<<"no\n";
}
