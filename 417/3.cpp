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
const ll maxn=1e5+1;
ll rec[maxn],ans[maxn];
ll n,s;
ll solve(ll k)
{
    for(int i=0;i<n;++i)
    {
        ans[i]=rec[i]+(i+1)*k;
    }
    sort(ans,ans+n);
    ll am=0;
    for(int i=0;i<k;++i)
    {
        am+=ans[i];
        if(am>s)
        {
            return 0;
        }
    }
    return am;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>s;
    for(int i=0;i<n;++i)
    {
        cin>>rec[i];
    }
    ll low=0,high=n+1,mid;
    while(low<high-1)
    {
        mid=(high-low)/2+low;
        if(!solve(mid))
        {
            high=mid;
        }
        else
        {
            low=mid;
        }
    }
    ll kkk=solve(low);
    if(kkk)
        cout<<low<<' '<<kkk<<'\n';
    else cout<<"0 0\n";
}


