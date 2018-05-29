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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    ll sum=0;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        ll x;cin>>x;sum+=x;
    }
    int m;cin>>m;
    for(int i=0;i<m;++i)
    {
        ll a,b;cin>>a>>b;
        if(a<=sum&&sum<=b)
        {
            cout<<sum<<'\n';
            return 0;
        }
        else if(a>sum)
        {
            cout<<a<<'\n';
            return 0;
        }
    }
    cout<<"-1\n";
}
