#include"iomanip"
#include"iostream"
#include"limits"
#include"cmath"
#include"vector"
#include"algorithm"
#include"list"
#include"queue"
#include"stack"
#include"set"
#include"map"
#include"string"
#include"cstring"
#include"assert.h"
using namespace std;
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define mp make_pair
#define pb push_back
#define mset(a,b) memset(a,b,sizeof(a))
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const int maxn=1e5+5;
ll a[2*maxn+10];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
    }
    for(int i=n+1;i<=2*n;++i)
    {
        a[i]=a[i-n];
    }
    ll s,f;
    cin>>s>>f;
    ll sum=0;
    ll ans=0;
    ll anst=0;
    for(int i=s;i<f;++i)sum+=a[i];
    ll ti=1;
    if(s==1)s=n+1;
    while(ti<=n)
    {
        //cout<<ti<<' '<<sum<<" ti sum\n";
        if(sum>ans)
        {
            ans=sum;
            anst=ti;
        }
        if(1)//sssssssssssss
        {
            if(s>1)
            {
                sum+=a[s-1];
            }
            if(s==2)
            {
                s=n+1;
            }
            else s--;
        }
        if(1)//fffffffffff
        {
            if(f>1)
            {
                sum-=a[f-1];
            }
            if(f==2)
            {
                f=n+1;
            }
            else f--;
        }
        ti++;
    }
    cout<<anst<<'\n';
}






