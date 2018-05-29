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
const ll mo=1e9+7;
const ll maxn=5*1e6+5;
const ll ma=3006;
bool pri[ma];
ll small[maxn];
void make()
{
    memset(small,-1,sizeof small);
    for(ll i=0;i<ma;++i)
    {
        pri[i]=1;
    }
    for(ll i=2;i<ma;++i)
    {
        if(!pri[i])
            continue;
        small[i]=i;
        for(ll j=i*i;j<maxn;j+=i)
        {
            if(j<ma)
                pri[j]=0;
            if(small[j]==-1)
            {
                small[j]=i;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    make();
    ll t,l,r;
    cin>>t>>l>>r;
    ll mul=1,ans=0;
    vector<ll>f(r+1);
    f[1]=0;
    for(ll i=2;i<=r;++i)
    {
        ll j=small[i];
        if(j==-1)
            j=i;


        f[i]=((i*(j-1)/2)%mo+f[i/j])%mo;
        //cout<<f[i]<<"   "<<i<<" f[i] i\n";
        if(i>=l)
        {
            ans=ans+(mul*f[i])%mo;
            ans%=mo;
            mul=(mul*t)%mo;
        }
    }
    cout<<(ans%mo+mo)%mo<<'\n';
}
