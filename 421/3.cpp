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
const ll maxn=1e6+5;
ll r[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>r[i];
    }
    for(int k=0;k<n;++k)
    {
        ll dev=0;
        for(int i=1;i<=n;++i)
        {
            int in=i-k;
            if(in<1)in+=n;
            dev+=abs(r[in]-i);
        }
        cout<<k<<' '<<dev<<" k deviation\n";
    }
}
