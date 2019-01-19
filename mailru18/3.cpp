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
const int maxn=1e3+4;
int li[maxn],ri[maxn],su[maxn],ans[maxn];
list<int>aa[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>li[i];
        ans[i]=-1;
    }
    int zeroexi=0,zpos=-1;
    for(int i=0;i<n;++i)
    {
        cin>>ri[i];
        su[i]=li[i]+ri[i];
        if(su[i]==0)
        {
            zeroexi=1;
            zpos=i;
            ans[i]=n;
        }
        if(su[i]>=n)
        {
            cout<<"NO\n";
            return 0;
        }
        aa[su[i]].pb(i);
    }
    if(zeroexi==0||li[0]!=0||ri[n-1]!=0)
    {
        cout<<"NO\n";
        return 0;
    }
    for(int i=1;i<n;++i)
    {
        if(li[i]>i)
        {
            cout<<"NO\n";
            return 0;
        }
    }
    for(int i=n-2;i>=0;--i)
    {
        if(ri[i]>n-1-i)
        {
            cout<<"NO\n";
            return 0;
        }
    }
    int cu=n-1;
    for(int i=1;i<n;++i)
    {
        if(!aa[i].empty())
        {
            for(int x:aa[i])
            {
                ans[x]=cu;
            }
            cu--;
        }
    }
    for(int i=0;i<n;++i)
    {
        if(ans[i]>n||ans[i]<1)
        {
            cout<<"NO\n";
            return 0;
        }
    }
    vector<int>lef;
    lef.pb(ans[0]);
    for(int i=1;i<n;++i)
    {
        sort(all(lef));
        int no=lef.end()-upper_bound(lef.begin(),lef.end(),ans[i]);
        if(no!=li[i])
        {
            cout<<"NO\n";
            return 0;
        }
        lef.pb(ans[i]);
    }
    vector<int>rig;
    rig.pb(ans[n-1]);
    for(int i=n-2;i>=0;--i)
    {
        sort(all(rig));
        int no=rig.end()-upper_bound(rig.begin(),rig.end(),ans[i]);
        if(no!=ri[i])
        {
            cout<<"NO\n";
            return 0;
        }
        rig.pb(ans[i]);
    }
    cout<<"YES\n";
    for(int i=0;i<n;++i)
    {
        if(i)cout<<' ';
        cout<<ans[i];
    }
    cout<<'\n';
}
