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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin>>n>>m>>k;
    vector<string>r(n);
    for(int i=0;i<n;++i)cin>>r[i];
    ll ans=0;
    for(int i=0;i<n;++i)
    {
        int co=0;
        for(int j=0;j<m;++j)
        {
            if(r[i][j]=='.')
            {
                co++;
            }
            else co=0;
            if(co>=k)
            {
                ans++;
            }
        }
    }
    for(int j=0;j<m;++j)
    {
        int co=0;
        for(int i=0;i<n;++i)
        {
            if(r[i][j]=='.')
            {
                co++;
            }
            else co=0;
            if(co>=k)
            {
                ans++;
            }
        }
    }
    if(k==1)ans/=2;
    cout<<ans<<'\n';
}












