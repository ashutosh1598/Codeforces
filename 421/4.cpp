#include"iostream"
#include"cmath"
#include"vector"
#include"algorithm"
#include"list"
#include"set"
#include"unordered_set"
#include"map"
#include"unordered_map"
#include"string"
#include"cstring"
#include"iomanip"
using namespace std;
typedef long long ll;
const int maxn=1e6+10;
ll p[maxn],a[maxn],d[maxn];
void add(int b,int k,int l,int r)
{
    if(l>r)
        return;
    a[l]+=b;
    a[r+1]-=b;
    d[l]+=k;
    d[r]-=k;
    a[r+1]-=1LL*k*(r-l);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>p[i+1];
    }
    memset(a,0,sizeof a);
    memset(d,0,sizeof d);
    for(int k=1;k<=n;++k)
    {
        ll x=p[k];
        if(x>=k)
        {
            add(x-k,-1,0,x-k-1);
            add(0,1,x-k,n-k);
            add(x-1,-1,n-k+1,n-1);
        }
        else
        {
            add(k-x,1,0,n-k);
            add(x-1,-1,n-k+1,x+n-k);
            add(1,1,x+n-k+1,n-1);
        }
    }
    for(int i=1;i<n;++i)
    {
        d[i]+=d[i-1];
        a[i]+=d[i-1];
        a[i]+=a[i-1];
    }
    ll ans=1e17,dev=-1;
    for(int i=0;i<n;++i)
    {
        if(a[i]<ans)
        {
            ans=a[i];
            dev=i;
        }
    }
    cout<<ans<<' '<<dev<<'\n';
}







