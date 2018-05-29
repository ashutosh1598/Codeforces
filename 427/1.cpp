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
	int s,v1,v2,t1,t2;
	cin>>s>>v1>>v2>>t1>>t2;
	int f=2*t1+v1*s,s1=2*t2+v2*s;
	if(f==s1)
		cout<<"Friendship\n";
	else if(f<s1)
		cout<<"First\n";
	else cout<<"Second\n";
}
