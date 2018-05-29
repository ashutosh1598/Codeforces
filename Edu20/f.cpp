#include"iostream"
#include"cmath"
#include"vector"
#include"algorithm"
#include"set"
#include"map"
using namespace std;
typedef long long ll;
int main()
{
    ll mod=1e9+7;
    ll n;cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];

}
ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
