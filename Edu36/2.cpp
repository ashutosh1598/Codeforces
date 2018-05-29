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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,po,l,r;
    cin>>n>>po>>l>>r;
    if(l==1&&r==n)
    {
        cout<<"0\n";
        return 0;
    }
    if(po==l)
    {
        int ans=0;
        if(l>1)ans++;
        if(r<n)ans+=r-l;
        if(r<n)ans++;
        cout<<ans<<'\n';
        return 0;
    }
    if(po==r)
    {
        int ans=0;
        if(r<n)ans++;
        if(l>1)ans+=r-l;
        if(l>1)ans++;
        cout<<ans<<'\n';
        return 0;
    }
    if(po<l)
    {
        int ans=l-po;
        ans++;
        if(r<n)ans+=r-l;
        if(r<n)ans++;
        cout<<ans<<'\n';
        return 0;
    }
    if(po>r)
    {
        int ans=po-r;
        ans++;
        if(l>1)ans+=r-l;
        if(l>1)ans++;
        cout<<ans<<'\n';
        return 0;
    }
    if(po>l&&po<r)
    {
        if(l==1)
        {
            cout<<r-po+1<<'\n';
            return 0;
        }
        if(r==n)
        {
            cout<<po-l+1<<'\n';
            return 0;
        }
        cout<<min(po-l+1+r-l+1,r-po+1+r-l+1)<<'\n';
    }
}



















