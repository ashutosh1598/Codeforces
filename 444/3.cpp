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
int a[25];
bool c(int x,int y,int d,int e)
{
	//sdddddd
	if(a[x]==a[y]&&a[y]==a[d]&&a[d]==a[e])
	{
		return true;
	}
	return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	for(int i=1;i<=24;++i)
	{
		cin>>a[i];
	}
	if(   c(1,3,6,8)&&c(5,7,10,12)&&c(9,11,21,23)&&c(22,24,2,4)&&c(13,14,15,16)&&c(17,18,19,20))
	{
		cout<<"YES\n";
		return 0;
	}
	if(  c(1,3,21,23)&&c(5,7,2,4)&&c(9,11,6,8)&&c(22,24,10,12)&&c(13,14,15,16)&&c(17,18,19,20))
	{
		cout<<"YES\n";
		return 0;
	}
	if(  c(13,14,7,8)&&c(5,6,19,20)&&c(17,18,23,24)&&c(21,22,15,16)&&c(1,2,3,4)&&c(9,11,10,12))
	{
		cout<<"YES\n";
		return 0;
	}
	if(  c(13,14,23,24)&&c(5,6,15,16)&&c(17,18,7,8)&&c(21,22,19,20)&&c(1,2,3,4)&&c(9,11,10,12))
	{
		cout<<"YES\n";
		return 0;
	}
	if(  c(3,4,18,20)&&c(17,19,11,12)&&c(9,10,13,15)&&c(14,16,1,2)&&c(5,6,7,8)&&c(21,22,23,24))
	{
		cout<<"YES\n";
		return 0;
	}
	if(  c(3,4,13,15)&&c(17,19,1,2)&&c(9,10,18,20)&&c(14,16,11,12)&&c(5,6,7,8)&&c(21,22,23,24))
	{
		cout<<"YES\n";
		return 0;
	}
	cout<<"NO\n";
	return 0;
}










