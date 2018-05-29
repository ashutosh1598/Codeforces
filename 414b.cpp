#include"iostream"
#include"cmath"
#include"vector"
#include"algorithm"
#include"set"
#include"map"
#include"string"
using namespace std;
typedef long long ll;
ll dp[2100][2100];
const ll mo=1e9+7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;cin>>n>>k;
    for(int i=1;i<=n;++i)
        dp[i][1]=1;
    ll res=0;
    for(ll i=n;i>=1;--i)
    {
        for(ll j=2;j<=k;++j)
        {
            dp[i][j]=0;
            for(int m=1;i*m<=n;++m)
            {
                dp[i][j]=(dp[i][j]+dp[m*i][j-1])%mo;
            }
    }
    cout<<res<<'\n';
}
