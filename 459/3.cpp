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
const int maxn=5000+5;
int dp[maxn][maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string x;
    cin>>x;
    int n=x.length();
    ll ans=0;
    for(int i=n-1;i>=0;--i)
    {
        for(int j=i+1;j<n;++j)
        {
            int ok=1;
            if(x[i]==')'||x[j]=='(')
            {
                ok=0;
            }
            if(ok)
            {
                if(i==j-1)dp[i][j]=1;
                else dp[i][j]=dp[i+1][j-1];
            }
            if(dp[i][j])
            {
                cout<<i<<' '<<j<<'\n';
                ans++;
            }
        }
    }
    cout<<ans<<'\n';
}
