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
const int maxn=2e5+5;
ll a[maxn],b[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    for(int i=0;i<n/2;++i)
    {
        cin>>b[i];
        a[i]=0;
        a[n-1-i]=b[i];
    }
    for(int i=n-2;i>=n/2;--i)
    {
        if(a[i]>a[i+1])
        {
            ll sub=a[i]-a[i+1];
            a[i]-=sub;
            a[n-1-i]+=sub;
        }
        if(a[n-1-i]<a[n-1-i-1])
        {
            ll sub=a[n-1-i-1]-a[n-1-i];
            a[i]-=sub;
            a[n-1-i]+=sub;
        }
    }
    for(int i=0;i<n;++i)
    {
        if(i)cout<<' ';
        cout<<a[i];
    }
    cout<<'\n';
}
