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
const int mo=998244353;
const int maxn=1e5+5;
int re[maxn];
ll dpn[maxn][202];
ll dps[maxn][202];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int lp=-1;
    for(int i=0;i<n;++i)
    {
        cin>>re[i];
        if(re[i]==-1)lp=i;
    }
    for(int i=1;i<n-1;++i)
    {
        if(re[i-1]!=-1&&re[i]!=-1&&re[i+1]!=-1&&re[i]>re[i-1]&&re[i]>re[i+1])
        {
            cout<<"0\n";
            return 0;
        }
    }
    if(re[0]!=-1&&re[1]!=-1&&re[0]>re[1])
    {
        cout<<"0\n";
        return 0;
    }
    if(re[n-1]!=-1&&re[n-2]!=-1&&re[n-1]>re[n-2])
    {
        cout<<"0\n";
        return 0;
    }
    if(re[0]==-1)
    {
        if(re[1]==-1)
        {
            for(int i=1;i<=200;++i)
            {
                dps[0][i]=1;
                dps[0][i]+=dps[0][i-1];
            }
        }
        else
        {
            for(int i=1;i<=re[1];++i)
            {
                dpn[0][i]=1;
            }
            for(int i=1;i<=200;++i)
            {
                dpn[0][i]+=dpn[0][i-1];
            }
        }
    }
    for(int i=1;i<n;++i)
    {
        if(re[i]!=-1)
        {
            continue;
        }
        if(re[i-1]==-1)
        {
            for(int j=1;j<=200;++j)
            {
                dps[i][j]=dps[i-1][j-1]+dpn[i-1][j-1];
                dps[i][j]+=dps[i][j-1];dps[i][j]%=mo;
                dpn[i][j]=dpn[i-1][200]-dpn[i-1][j-1]+dps[i-1][j]-dps[i-1][j-1];
                dpn[i][j]+=dpn[i][j-1];dpn[i][j]%=mo;
            }
        }
        else
        {
            if(i==1)
            {
                dpn[i][re[i-1]]=1;
                for(int j=re[i-1]+1;j<=200;++j)
                {
                    dps[i][j]=1;
                    dps[i][j]+=dps[i][j-1];
                    dpn[i][j]=1;
                }
            }
            else
            {
                if(re[i-2]==-1)
                {
                    for(int j=1;j<re[i-1];++j)
                    {
                        dpn[i][j]=dps[i-2][re[i-1]]-dps[i-2][re[i-1]-1]+dpn[i-2][200]-dpn[i-2][re[i-1]-1];
                    }
                    dpn[i][re[i-1]]=dpn[i-2][200]+dps[i-2][re[i-1]];
                    for(int j=re[i-1]+1;j<=200;++j)
                    {
                        dps[i][j]=dpn[i-2][200]+dps[i-2][re[i-1]];
                    }
                    for(int j=1;j<=200;++j)
                    {
                        dpn[i][j]+=dpn[i][j-1];dpn[i][j]%=mo;
                        dps[i][j]+=dps[i][j-1];dps[i][j]%=mo;
                    }
                }
                else
                {
                    if(re[i-2]>=re[i-1])
                    {
                        for(int j=1;j<re[i-1];++j)
                        {
                            dps[i][j]=1;
                        }
                        for(int j=re[i-1];j<=200;++j)
                        {
                            dpn[i][j]=1;
                        }
                    }
                    else
                    {
                        dpn[i][re[i-1]]=1;
                        for(int j=re[i-1]+1;j<=200;++j)
                        {
                            dps[i][j]=1;
                        }
                    }
                    for(int j=1;j<=200;++j)
                    {
                        dpn[i][j]+=dpn[i][j-1];dpn[i][j]%=mo;
                        dps[i][j]+=dps[i][j-1];dps[i][j]%=mo;
                    }
                }
            }
        }
    }
    ll ans=1;
    for(int i=0;i<n;++i)
    {
        if(re[i]==-1)
        {
            if(i<=n-3&&re[i+1]!=-1&&re[i+2]!=-1)
            {
                if(re[i+1]>re[i+2])
                {
                    ans*=dpn[i][200]-dpn[i][re[i+1]-1]+dps[i][re[i+1]]-dps[i][re[i+1]-1];
                    ans%=mo;
                }
                if(re[i+1]<=re[i+2])
                {
                    ans*=dpn[i][200]+dps[i][re[i+1]];
                    ans%=mo;
                }
            }
        }
    }
    if(re[n-2]==-1&&re[n-1]!=-1)
    {
        ans*=dpn[n-2][200]-dpn[n-2][re[n-1]-1]+dps[n-2][re[n-1]]-dps[n-2][re[n-1]-1];
        ans%=mo;
    }
    if(re[n-1]==-1)
    {
        ans*=(dpn[n-1][200]);
        ans%=mo;
    }
    ans%=mo;
    ans=ans+mo;
    ans%=mo;
    cout<<ans<<'\n';
}
