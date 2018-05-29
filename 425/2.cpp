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
	string ab;cin>>ab;
	set<char>my;
	for(int i=0;i<ab.length();++i)
	{
		my.insert(ab[i]);
	}
	string x;
	cin>>x;
	bool aa=x.find('*')==string::npos;
	string alt1="",alt2="";
	if(!aa)
	{
		alt1=x.substr(0,x.find('*'));
		alt2=x.substr(x.find('*')+1);
	}
	else alt1=x;
	int t;
	cin>>t;
	while(t--)
	{
		string q;
		cin>>q;
		if(aa)
		{
			if(x.length()!=q.length())
			{
				cout<<"NO\n";
			}
			else
			{
				bool a=true;
				for(int i=0;i<x.length();++i)
				{
					if(x[i]==q[i])continue;
					else if(x[i]!='?')
					{
						a=false;
						break;
					}
					else
					{
						if(my.find(q[i])==my.end())
						{
							a=false;
							break;
						}
					}
				}
				if(a)
				{
					cout<<"YES\n";
				}
				else cout<<"NO\n";
			}
		}
		else
		{
			if(q.length()<x.length()-1)
			{
				cout<<"NO\n";
			}
			else
			{
				string star=q.substr(alt1.length(),q.length()-alt1.length()-alt2.length());
				bool a=true;
				for(int i=0;i<alt1.length();++i)
				{
					if(x[i]==q[i])continue;
					if(x[i]!='?')
					{
						a=false;break;
					}
					else if(x[i]!=q[i]&&my.find(q[i])==my.end())
					{
						a=false;break;
					}
				}
				for(int i=0;i<star.length();++i)
				{
					if(my.find(star[i])!=my.end())
					{
						a=false;break;
					}
				}
				for(int i=x.length()-1,j=q.length()-1;i>x.length()-1-alt2.length();--i,--j)
				{
					if(x[i]==q[j])continue;
					if(x[i]!='?')
					{
						a=false;
						break;
					}
					else if(x[i]!=q[j]&&my.find(q[j])==my.end())
					{
						a=false;break;
					}
				}
				if(a)
				{
					cout<<"YES\n";
				}
				else cout<<"NO\n";
			}
		}
	}
}








