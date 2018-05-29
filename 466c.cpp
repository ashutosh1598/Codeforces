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
const ll maxn=5e5+5;
ll rec[maxn],pre[maxn],r23[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;cin>>n;
    pre[0]=0;
    ll sum=0;
    for(int i=1;i<=n;++i)
    {
        cin>>rec[i];
        pre[i]=rec[i]+pre[i-1];
    }
    sum=pre[n];
    ll ans=0;
    if(sum%3!=0)
    {
        cout<<"0\n";return 0;
    }
    r23[n]=0;
    for(int i=n-1;i>=2;--i)
    {
        r23[i]=r23[i+1];
        if(pre[i]==2*sum/3)
        {
            r23[i]+=1;
        }
        if(pre[i-1]==sum/3)
        {
            ans+=r23[i];
        }
    }
    cout<<ans<<'\n';


}
