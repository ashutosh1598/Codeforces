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
ll fac(ll n)
{
    ll ans=1;
    for(ll i=1;i<=n;++i)
        ans*=i;
    return ans;
}
ll gcd(ll a,ll b)
{
    if(b==0)
    {
        return a;
    }
    else return gcd(b,a%b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b;
    cin>>a>>b;
    if(a>b)
    {
        swap(a,b);
    }
    /*
    ll b1=1,a1=fac(a);
    for(ll i=1;i<=b;++i)
    {
        b1=b1*i;
        b1%=a1;
    }*/
    cout<<fac(a)<<'\n';
}
