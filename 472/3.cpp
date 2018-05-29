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
ll n,u;
ld e[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>u;
    for(int i=1;i<=n;++i)
    {
        cin>>e[i];
    }
    int k=3;
    ld ans=-1;
    for(int i=1;i<=n;++i)
    {
        while(k+1<=n&&e[k+1]-e[i]<=u)
        {
            k++;
        }
        if(i+1>=k)continue;
        if(e[k]-e[i]>u)continue;
        ans=max(ans,1-(e[i+1]-e[i])/(e[k]-e[i]));
    }
    cout<<fixed<<setprecision(12);
    if(ans<-0.5)
    {
        cout<<"-1\n";
    }
    else
    {
        cout<<ans<<'\n';
    }
}
