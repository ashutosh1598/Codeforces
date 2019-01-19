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
#define INF 1000000000000LL
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const int maxn=5000+3;
ll dp[maxn][maxn];
ll re[maxn];
multiset<ll>my[maxn];
int main()
{
    int n,k,x;
    scanf("%d%d%d",&n,&k,&x);
    ll sum=0;
    for(int i=1;i<=n;++i)
    {
        scanf("%lld",re+i);
        sum+=re[i];
    }
    if(x<(n/k))
    {
        cout<<"-1\n";
        return 0;
    }
    if(k==1)
    {
        cout<<sum<<'\n';
        return 0;
    }
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=x;++j)
        {
            if(j>i)
            {
                dp[i][j]=-INF;
                continue;
            }
            ll maa=0;
            if(!my[j-1].empty())
            {
                auto it = my[j-1].end();
                it--;
                maa=*(it);
                dp[i][j]=re[i]+maa;
            }
            else
            {
                if(j==1&&i<=k)
                {
                    dp[i][j]=re[i];
                }
                else
                {
                    dp[i][j]=-INF;
                }
            }
        }
        for(int j=1;j<=x;++j)
        {
            if(i-k>=1)
            {
                auto it=my[j].find(dp[i-k][j]);
                if(it!=my[j].end())
                    my[j].erase(it);
            }
            my[j].insert(dp[i][j]);
        }
    }
    ll ans=-1;
    for(int i=n;i>=n-k+1;--i)
    {
        ans=max(ans,dp[i][x]);
    }
    printf("%lld\n",ans);
}
