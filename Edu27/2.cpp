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
int ma1[6],mi1[6];
//int ma2[3],mi2[3];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string x;
	cin>>x;
	for(int i=0;i<3;++i)
	{
		int y=x[i]-'0';
		ma1[i]=9-y;ma1[i+3]=(x[i]-'0')-0;
		mi1[i]=y-0;mi1[i+3]=9-(x[i]-'0');
	}/*
	for(int i=0;i<3;++i)
	{
		int y=x[i+3]-'0';
		ma2[i]=9-y;
		mi2[i]=y-0;
	}*/
	int s1=0,s2=0;
	for(int i=0;i<3;++i)
	{
		int y1=x[i]-'0',y2=x[i+3]-'0';
		s1+=y1;
		s2+=y2;
	}
	sort(ma1,ma1+6);
	sort(mi1,mi1+6);
	//sort(ma2,ma2+3);
	//sort(mi2,ma+3);
	if(s1<s2)
	{
		int c=0;
		int in=5;
		while(s1<s2&&in>=0)
		{
			c++;
			s1+=ma1[in--];
		}
		cout<<c<<'\n';
	}
	else
	{
		int c=0;
		int in=5;
		while(s1>s2&&in>=0)
		{
			c++;
			s1-=mi1[in];
		}
		cout<<c<<'\n';
	}
}





