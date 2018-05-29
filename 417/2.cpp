#include"iostream"
#include"cmath"
#include"vector"
#include"algorithm"
#include"list"
#include"set"
#include"unordered_set"
#include"map"
#include"unordered_map"
#include"string"
#include"cstring"
#include"iomanip"
using namespace std;
typedef long long ll;
int l[20],r[20];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;cin>>n>>m;
    m+=2;
    vector<string>rec(n+1);
    bool rtr=true;
    for(int i=n-1;i>=0;--i)
    {
        cin>>rec[i];
        if(rtr&&rec[i].find('1')==string::npos)
        {
            n--;
        }
        else rtr=false;
    }
    if(n==0)
    {
        cout<<"0\n";
        return 0;
    }
    for(int i=0;i<n;++i)
    {
        int first=m-1,last=0;
        for(int j=1;j<m-1;++j)
        {
            if(rec[i][j]=='1')
            {
                first=j;break;
            }
        }
        for(int j=m-2;j>=1;--j)
        {
            if(rec[i][j]=='1')
            {
                last=j;break;
            }
        }
        l[i]=first;
        r[i]=last;
    }
    int dp[20][2];
    dp[n-1][0]=r[n-1];dp[n-1][1]=m-1-l[n-1];
    for(int i=n-2;i>=0;--i)
    {
        dp[i][0]=min(m-1+1+dp[i+1][1],2*r[i]+1+dp[i+1][0]);
        dp[i][1]=min(m-1+1+dp[i+1][0],2*(m-1-l[i])+1+dp[i+1][1]);
    }
    cout<<dp[0][0]<<'\n';
}






