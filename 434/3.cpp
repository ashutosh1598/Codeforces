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
int co[100];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string x;
	cin>>x;
	int le=x.length();
	for(int i=0;i<100;++i)co[i]=1;
	co['a'-'a']=0;
	co['e'-'a']=0;
	co['i'-'a']=0;
	co['o'-'a']=0;
	co['u'-'a']=0;
	int st=0;
	set<char>fo;
	for(int i=0;i<le;++i)
	{
		char cc=x[i];
		if(co[cc-'a']==0)
		{
			cout<<x[i];
			fo.clear();
			st=0;
		}
		else
		{
			st++;
			//fo.insert(x[i]);
			int it=i;
			fo.clear();
			for(it=i;it>=i-2&&it>=0;--it)
			{
				fo.insert(x[it]);
			}
			int fsz=fo.size();
			if(st>=3&&fsz>1)
			{
				cout<<' '<<x[i];
				//fo.clear();
				st=1;
				//fo.insert(x[i]);
			}
			else
			{
				cout<<x[i];
			}
		}
	}
	cout<<'\n';
}









