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

const ll mo=998244353;

const ll maxn=2000+3;

ll dp[maxn][maxn];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,k;
    cin>>n>>m>>k;
    dp[1][0]=m;
    for(int i=2;i<=n;++i)
    {
        dp[i][0]=m;
        for(int j=1;j<=k;++j)
        {
            dp[i][j]=( (m-1)*dp[i-1][j-1])%mo;
            dp[i][j]+=dp[i-1][j];
            dp[i][j]%=mo;
        }
    }
    cout<<dp[n][k]<<'\n';
}
