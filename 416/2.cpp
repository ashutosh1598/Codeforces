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
ll rec[10005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;cin>>n>>m;
    for(int i=1;i<=n;++i)
    {
        cin>>rec[i];
    }
    while(m--)
    {
        ll l,r,x;cin>>l>>r>>x;
        ll t=rec[x],sum=0;
        for(int i=l;i<=r;++i)
        {
            if(rec[i]<t)
                ++sum;
        }
        if(sum==x-l)
        {
            cout<<"Yes\n";
        }
        else cout<<"No\n";
    }
}
