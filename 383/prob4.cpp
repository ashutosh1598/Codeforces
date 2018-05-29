#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
const int maxn=1003;
int par[maxn],we[maxn],be[maxn];
list<int>rec[maxn];
int dp[maxn][maxn];
int find(int x)
{
    return par[x]==x?x:par[x]=find(par[x]);
}
void merge(int x,int y)
{
    par[find(x)]=find(y);
}
int main()
{
    int n,m,w;
    cin>>n>>m>>w;
    for(int i=0;i<n;++i)
        cin>>we[i];
    for(int i=0;i<n;++i)
    {
        cin>>be[i];
        par[i]=i;
    }
    for(int i=0;i<m;++i)
    {
        int x,y;cin>>x>>y;
        merge(x-1,y-1);
    }
    for(int i=0;i<n;++i)
    {
        rec[find(i)].push_back(i);
    }
    for(int i=n-1;i>=0;--i)
    {
        for(int w1=1000;w1>=0;--w1)
        {
            if(rec[i].empty())
            {
                dp[i][w1]=dp[i+1][w1];
            }
            else
            {
                dp[i][w1]=dp[i+1][w1];
                int sumw=0,sumb=0;
                for(int k:rec[i])
                {
                    if(we[k]<=w1)
                        dp[i][w1]=max(dp[i][w1],be[k]+dp[i+1][w1-we[k]]);
                    sumw+=we[k];
                    sumb+=be[k];
                }
                if(sumw<=w1)
                {
                    dp[i][w1]=max(dp[i][w1],sumb+dp[i+1][w1-sumw]);
                }
            }
        }
    }
    cout<<dp[0][w]<<'\n';
}





