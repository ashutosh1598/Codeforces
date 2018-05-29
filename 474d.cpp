#include"iostream"
#include"cmath"
#include"vector"
#include"algorithm"
#include"set"
#include"map"
#include"string"
using namespace std;
typedef long long ll;
const ll mo=1e9+7;
ll dp[100005];
ll sum[100005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,k;cin>>t>>k;
    dp[0]=1;
    sum[0]=1;
    for(int i=1;i<1e5+3;++i)
    {
        if(i-k>=0)
            dp[i]=(dp[i-1]+dp[i-k])%mo;
        else dp[i]=dp[i-1];
        sum[i]=(sum[i-1]+dp[i])%mo;
    }
    while(t--)
    {
        int a,b;cin>>a>>b;
        cout<<((sum[b]-sum[a-1])%mo+mo)%mo<<'\n';
    }

}
