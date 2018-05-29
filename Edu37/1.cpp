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
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>x(k),occ(n+1,0);
        for(int i=0;i<k;++i)
        {
            cin>>x[i];
            occ[x[i]]=1;
        }
        vector<int>ne(n+1,1e7);
        int las=-1e7;
        for(int i=1;i<=n;++i)
        {
            if(occ[i])
            {
                las=i;
            }
            ne[i]=min(ne[i],i-las+1);
        }
        las=1e7;
        for(int i=n;i>=1;--i)
        {
            if(occ[i])
            {
                las=i;
            }
            ne[i]=min(ne[i],las-i+1);
        }
        int ans=-1;
        for(int i=1;i<=n;++i)
        {
            ans=max(ans,ne[i]);
        }
        cout<<ans<<'\n';
    }
}









