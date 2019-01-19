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
const int maxn=1e5+5;
ll re[10][maxn];
ll pos[10][maxn];
ll cst[10],cen[10];
ll n,m;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<n;++j)
        {
            cin>>re[i][j];
            pos[i][re[i][j]]=j;
        }
    }
    if(m==1)
    {
        ll tp=n;
        cout<<tp*(tp+1)/2<<'\n';
        exit(0);
    }
    int st=0,en=0;
    for(int i=0;i<m-1;++i)
    {
        cst[i]=pos[i][re[m-1][0]];
        cen[i]=pos[i][re[m-1][0]];
    }
    ll ans=0;
    while(st<n&&en<n)
    {
        while(1)
        {
            if(en==n-1)break;
            en++;
            int cor=1;
            ll nextnu=re[m-1][en];
            for(int i=0;i<m-1;++i)
            {
                if(cen[i]+1>n-1)
                {
                    cor=0;
                    break;
                }
                if(re[i][cen[i]+1]!=nextnu)
                {
                    cor=0;
                    break;
                }
            }
            if(cor==0)
            {
                en--;
                break;
            }
            else
            {
                for(int i=0;i<m-1;++i)
                {
                    cen[i]++;
                }
            }
        }
        ll len=en-st+1;
        ans+=len*(len+1)/2;
        en=en+1;
        if(en>n-1)break;
        st=en;
        for(int i=0;i<m-1;++i)
        {
            cst[i]=pos[i][re[m-1][en]];
            cen[i]=pos[i][re[m-1][en]];
        }
    }
    cout<<ans<<'\n';
}
