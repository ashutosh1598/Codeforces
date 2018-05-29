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
const ll maxn=1e6;
ll re[maxn+5];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    int i=0;
    while(i++<n)
    {
        ll x;cin>>x;
        ++re[x];
    }
    ll ans=0,curr=0;
    for(int i=0;i<maxn;++i)
    {
        if(re[i]&1LL)
        {
            ++ans;--re[i];
        }
        re[i+1]+=re[i]/2;
    }
    ll x=re[maxn];
    while(x)
    {
        if(x&1)
        {
            ++ans;
            --x;
        }
        else
        {
            x/=2;
        }
    }
    cout<<ans<<'\n';
}
