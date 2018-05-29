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
	char c1,c2;
	cin>>c1>>c2;
	int n;
	cin>>n;
	n%=4;
	int x=c1,y=c2;
	map<int,int>r;
	r[118]=60;
	r[60]=94;
	r[94]=62;
	r[62]=118;
	int n1=n,n2=4-n;
	int x1=x;
	bool a=false,b=false;
	while(n1--)
	{
		x1=r[x1];
	}
	if(x1==y)
	{
		//cout<<"cw\n";
		a=true;
	}
	x1=x;
	while(n2--)
	{
		x1=r[x1];
	}
	if(x1==y)
	{
		//cout<<"ccw\n";
		b=true;
	}
	if(a&&b)
		cout<<"undefined\n";
	else if(a)
	{
		cout<<"cw\n";
	}
	else if(b)
		cout<<"ccw\n";
	else cout<<"undefined\n";
}







