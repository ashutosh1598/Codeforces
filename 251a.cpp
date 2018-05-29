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
    ll n,d;cin>>n>>d;
    vector<ll>x(n);
    for(int i=0;i<n;++i)
        cin>>x[i];
    ll ans=0;
    for(int i=0;i<n-2;++i)
    {
        int pos=upper_bound(x.begin(),x.end(),x[i]+d)-x.begin();
        --pos;
        if(pos<=i+1)
            continue;
        else
        {
            ll no=pos-i;
            ans+=no*(no-1)/2;
        }
    }
    cout<<ans<<'\n';
}



