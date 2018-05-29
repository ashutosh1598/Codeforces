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
#include"limits"
using namespace std;
typedef long long ll;
int a[50];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    for(int i=1;i<=n;++i)cin>>a[i];
    sort(a+1,a+1+n);
    int curr=numeric_limits<int>::max();
    ll ans=0;
    for(int i=n;i>=1;--i)
    {
        if(a[i]<curr)
        {
            ans+=a[i];
            curr=a[i];
        }
        else
        {
            a[i]=max(0,curr-1);
            curr=a[i];
            ans+=a[i];
        }
    }
    cout<<ans<<'\n';
}
