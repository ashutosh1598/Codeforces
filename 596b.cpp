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
    int n,curr=0;cin>>n;
    ll ans=0;
    for(int i=0;i<n;++i)
    {
        int x;cin>>x;
        ans+=abs(x-curr);
        curr=x;
    }
    cout<<ans<<'\n';
}
