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
ll a[maxn];
ll d[maxn];
ll cnt[maxn];
list<ll>adj[maxn];
ll ans[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        d[i]=n-a[i];
        cnt[d[i]]++;
        adj[d[i]].pb(i);
    }
    int col=1;
    for(int i=1;i<=n;++i)
    {
        if(cnt[i]==0)continue;
        if(cnt[i]%i!=0)
        {
            cout<<"Impossible\n";
            return 0;
        }

        int co=0;
        for(ll ind:adj[i])
        {
            ans[ind]=col;
            co++;
            if(co%i==0)
            {
                col++;
            }
        }
    }
    for(int i=0;i<n;++i)
    {
        if(ans[i]==0)
        {
            cout<<"Impossible\n";
            return 0;
        }
    }
    cout<<"Possible\n";
    for(int i=0;i<n;++i)
    {
        if(i)cout<<' ';
        cout<<ans[i];
    }
    cout<<'\n';
}









