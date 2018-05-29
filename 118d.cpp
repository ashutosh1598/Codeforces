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
const ll mo=1e8;
ll dp[250][24][110];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,n1,n2,a,b;cin>>n1>>n2>>a>>b;
    n=n1+n2;
    dp[1][1][1]=1;
    dp[1][0][0]=1;
    for(int i=2;i<24;++i)
    {
        dp[1][i][0]=0;
    }
    for(int i=2;i<=n;++i)
    {
        for(int s=0;s<=n1;++s)
        {
            for(int k=1;k<=a&&k<=s;++k)
            {
                dp[i][k][s]=dp[i-1][k-1][s-1];
            }
            dp[i][0][s]=0;
            for(int k=1;k<=b&&i>k;++k)
            {
                for(int p=1;p<=a;++p)
                {
                    dp[i][0][s]+=dp[i-k][p][s];
                }
                dp[i][0][s]%=mo;
            }
        }
        if(i<=b)
        {
            dp[i][0][0]++;
        }
        dp[i][0][0]%=mo;
    }
    ll ans=0;
    for(int i=0;i<=a;++i)
    {
        ans+=dp[n][i][n1];
    }
    ans%=mo;
    cout<<ans<<'\n';
}
