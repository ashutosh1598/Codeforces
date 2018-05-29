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
struct tri
{
	tri* aa[10];
	int en[10];
	int las[10];
	tri()
	{
		for(int i=0;i<10;++i)
		{
			aa[i]=NULL;
			en[i]=0;
			las[i]=-1;
		}
	}
};
tri* ex;
int cur=-1;
int tot;
void ins(string x)
{
	tri *n=ex;
	int  len=x.length();
	for(int i=0;i<len;++i)
	{
		int in=x[i]-'0';
		if(n->aa[in]==NULL)
		{
			n->aa[in]=new tri();
			n=n->aa[in];
		}
		else
		{
			n=n->aa[in];
		}
		if(1)
		{
			if(n->las[in]<cur)
			{
				n->en[in]++;
				n->las[in]=cur;
			}
		}
	}
}
int che(string x)
{
	tri *n=ex;
	int nn=x.length();
	for(int i=0;i<nn;++i)
	{
		int in=x[i]-'0';
		if(n->aa[in]==NULL)
		{
			return 0;
		}
		else
		{
			n=n->aa[in];
		}
		if(i==nn-1)
		{
			return n->en[in];
			if(n->en[in]==1)
				return 1;
			else return 0;
		}
	}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>tot;
	vector<string>re(tot);
	ex=new tri();
	for(int i=0;i<tot;++i)
	{
		cur=i;
		cin>>re[i];
		/*
		string y=re[i];
		reverse(all(y));
		*/
		for(int j=0;j<9;++j)
		{
			ins(re[i].substr(j,100));
			//ins("234980234234");
		}
	}
	for(int i=0;i<tot;++i)
	{
		bool pri=false;
		for(int j=1;j<=9;++j)
		{
			for(int st=0;st+j-1<=8;++st)
			{
				string tem=re[i].substr(st,j);
				if(che(tem)==1)
				{
					cout<<tem<<'\n';
					pri=true;
					break;
				}
			}
			if(pri)
				break;
		}
	}
	/*
	string x;
	cin>>x;
	cout<<che(x)<<'\n';
	*/

}











