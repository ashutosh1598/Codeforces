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
using namespace std;
typedef long long ll;
typedef long double ld;
const int maxn=1e4+5;
int  dp1[maxn],dp2[maxn];
set<string>my;
string x;int n;
int solve(int i,int l)
{
	if(l==2&&dp1[i]>=0)
		return dp1[i];
    if(l==3&&dp2[i]>=0)
        return dp2[i];
	if(i+l-1>=n)
	{
		return false;
	}
	int left=n-(i+l-1)-1;
	if(left==0)return true;
	if(left==1)return false;
	if(solve(i+l,2))
	{
        if(l==3)
        {
            dp2[i]=1;return 1;
        }
        if(l==2)
        {
            if(x.substr(i,2)!=x.substr(i+2,2))
            {
                dp1[i]=1;return 1;
            }
        }
	}
    if(solve(i+l,3))
    {
        if(l==2)
        {
            dp1[i]=1;return 1;
        }
        if(l==3)
        {
            if(x.substr(i,3)!=x.substr(i+3,3))
            {
                return dp2[i]=1;
            }
        }
    }
    if(l==2)return dp1[i]=0;
    else return dp2[i]=0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>x;n=x.length();
    memset(dp1,-1,sizeof dp1);memset(dp2,-1,sizeof dp2);
    for(int i=5;i<n-1;++i)
    {
        if(solve(i,2))
        {
            my.insert(x.substr(i,2));
        }
        if(solve(i,3))
        {
            my.insert(x.substr(i,3));
        }
    }
    //string s;
	cout<<my.size()<<'\n';
	for(auto s:my)
		cout<<s<<'\n';

}
