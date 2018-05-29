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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,f;cin>>n>>f;
    vector<ll>gain(n);
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        int k,l;cin>>k>>l;
        ans+=min(k,l);
        if(l<=k)
            gain[i]=0;
        else
        {
            gain[i]=min(2*k,l)-k;
        }
    }
    sort(gain.begin(),gain.end());
    for(int i=0;i<f;++i)
    {
        ans+=gain[n-1-i];
    }
    cout<<ans<<'\n';
}
