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
const ll maxn=1e5+10;
ll rec[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>rec[i]; 
    }
    sort(rec,rec+n);
    int m=rec[2];
    ll co=3;
    for(int i=3;i<n;++i)
    {
        if(rec[i]==m)
            ++co;
        else break;
    }
    ll a[3],in=0;
    a[0]=0;a[1]=0;a[2]=0;
    for(int i=0;i<co;++i)
    {
        if(i==0)
        {
            a[0]++;
        }
        else if(rec[i]>rec[i-1])
        {
            in++;
            a[in]++;
        }
        else a[in]++;
    }
    ll p=a[0],q=a[1],r=a[2];
    ll ans=1;
    if(in==0)
    {
        ans=p*(p-1)*(p-2)/6;
    }
    else if(in==1)
    {
        ll k=3-p;
        if(k==1)
        {
            ans=q;
        }
        else ans=q*(q-1)/2;
    }
    else if(in==2)
    {
        ans=r;
    }
    cout<<ans<<'\n';

}
