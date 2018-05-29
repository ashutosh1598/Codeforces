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
vector<char> re[30];
vector<string>ma;
string ins;
int n,m;
int x1,y11,x2,y2;
int solve(int k)
{
    vector<char> t=re[k];
    int r=x1,c=y11;
    for(int i=0;i<ins.length();++i)
    {
        int di=ins[i]-'0';
        char dir=t[di];
        //cout<<dir<<" dir \n";
        if(dir=='u')
        {
            r--;
        }
        if(dir=='d')r++;
        if(dir=='l')c--;
        if(dir=='r')c++;
        if(!   (r>=0&&r<n&&c>=0&&c<m))
        {
            return 0;
        }
        if(ma[r][c]=='#')return 0;
        if(r==x2&&c==y2)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    ma.resize(n+4);
    for(int i=0;i<n;++i)cin>>ma[i];
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            if(ma[i][j]=='S')
            {
                x1=i;
                y11=j;
            }
            if(ma[i][j]=='E')
            {
                x2=i;
                y2=j;
            }
        }
    }
    cin>>ins;
    for(int i=0;i<30;++i)
    {
        re[i].resize(4);
    }
    re[0][0]='d';re[0][1]='l';re[0][2]='r';re[0][3]='u';
    for(int i=1;i<30;++i)
    {
        re[i]=re[i-1];
        if(!next_permutation(re[i].begin(),re[i].begin()+4) )break;
    }
    int ans=0;
    for(int i=0;i<24;++i)
    {
        ans+=solve(i);
    }
    cout<<ans<<'\n';
}
