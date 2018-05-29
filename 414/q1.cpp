#include"iostream"
#include"cmath"
#include"vector"
#include"algorithm"
#include"set"
#include"map"
#include"string"
using namespace std;
typedef long long ll;
int main()
{
    ll a,b,c;cin>>a>>b>>c;
    ll n;cin>>n;
    ll sum1=0,sum2=0,sum3=0;
    for(ll i=1;i<=n;++i)
    {
        ll x; cin>>x;
        if(x<b)
            sum1++;
        else if(x>c)
            sum3++;
        else if(x>b&&x<c)
            sum2++;
    }
    if(a<b)
        cout<<sum1<<endl;
    else if(a>c)
        cout<<sum3<<endl;
    else cout<<sum2<<endl;
}








