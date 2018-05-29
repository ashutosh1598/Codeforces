#include"iostream"
#include"cmath"
#include"vector"
#include"algorithm"
#include"set"
#include"map"
#include"string"
using namespace std;
typedef long long ll;
const ll mo=1e9+7;
ll a[300001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(n==1)
    {
        cout<<"0\n";
        return 0;
    }
    ll s=a[1]-a[0];
    ll curr=a[0]+a[1]*2;
    ll po=3;
    ll sum=(a[0]+a[1])%mo;
    for(ll i=3;i<=n;++i)
    {
        s=(s+s+a[i-1]*po-curr+mo)%mo;
        curr=(curr+a[i-1]*(po+1))%mo;
        po=((po+1)*2-1)%mo;
    }
    cout<<s<<"\n";
}
