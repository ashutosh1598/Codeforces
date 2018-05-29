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
    /*
    map<int,int>my;
    map<int,int>el;
    */
    int n,x,k;
    cin>>n>>x>>k;
    /*
    ll ans=0;
    for(int i=0;i<n;++i)
    {
        int a;
        cin>>a;
        if(a%x!=0)
            my[(a)/x]++;
        else
            el[a]++;
        if(k==0)
        {
            if(a%x==0)
            {
                continue;
            }
            else
            {

            }
        }
    }
    */
    vector<int>r(n);
    for(int i=0;i<n;++i)
    {
        cin>>r[i];
    }
    sort(all(r));
    ll ans=0;
    for(int i=0;i<n;++i)
    {
        int a=r[i];
        if(k==0)
        {
            if(a%x==0)
            {
                continue;
            }
            else
            {
                int nu=(a/x)*x+1;
                int pos=lower_bound(r.begin(),r.end(),nu)-r.begin();
                ans+=max(i-1-pos+1,0);
                ans++;
            }
        }
        else
        {
            int nu,hi;
            int qu=a/x;
            if(a%x==0)
            {
                hi=(qu-(k-1))*x;
                nu=hi-(x-1);
            }
            else
            {
                hi=(qu-(k-1))*x;
                nu=hi-(x-1);
            }
            int p1=lower_bound(all(r),nu)-r.begin();
            int p2=upper_bound(all(r),hi)-r.begin();
            p2--;
            if(p2>i)p2=i;
            if(p2==i)p2--;
            //cout<<p1<<' '<<p2<<' '<<i<<" p1 p2 i\n";
            ans+=max(p2-p1+1,0);
            if(k==1&&a%x==0)ans++;
        }
    }
    if(k==1)
    {
        int i=0;
        while(i<n)
        {
            int pos=upper_bound(all(r),r[i])-r.begin();
            pos--;
            ll to=pos-i+1;
            if(r[i]%x==0)
            ans+=to*(to-1)/2;
            i=pos+1;
        }
    }
    cout<<ans<<'\n';
}

















