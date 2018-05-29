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
const ll maxn=1e5+10;
ll rec[maxn];
ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    else return gcd(b,a%b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;cin>>n>>k;
    for(int i=0;i<n;++i)
        cin>>rec[i];
    ll ans=0;
    ll x,y=n-1;
    ll cur=1;ll tk=1;
    for(x=n-1;x>=0;--x)
    {
        tk*=rec[x];
        tk%=k;
        if(tk%k)
            continue;
        for(;y>=x;--y)
        {
            ll temp=tk/gcd(tk,rec[y]);
            if(temp%k)
                break;
            else tk=temp;
        }
        //cout<<x<<' '<<n-y<<" x y\n";
        ans+=n-y;
    }
    cout<<ans<<'\n';
}
