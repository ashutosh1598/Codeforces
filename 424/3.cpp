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
#include"unordered_set"
#include"map"
#include"unordered_map"
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
const ll maxn=2010;
ll pre[maxn],b[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll k,n;
    cin>>k>>n;
    ll max1=-1e9,min1=1e9;
    set<ll>my;
    for(int i=1;i<=k;++i)
    {
        cin>>pre[i];
        pre[i]+=pre[i-1];
        max1=max(max1,pre[i]);
        min1=min(min1,pre[i]);
        my.insert(pre[i]);
    }
    for(int i=0;i<n;++i)
    {
        cin>>b[i];
    }
    sort(b,b+n);
    ll ans=0;
    for(int x=b[0]-max1;x<=b[n-1]-min1;++x)
    {
        bool kk=true;
        for(int i=0;i<n;++i)
        {
            if(my.find(b[i]-x)==my.end())
            {
                kk=false;
                break;
            }
        }
        if(kk)
            ans++;
    }
    cout<<ans<<'\n';
}







