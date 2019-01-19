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
#include"unordered_set"
#include"map"
#include"unordered_map"
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
    int n,k;
    cin>>n>>k;
    vector<int>job[100000+10];
    vector<int>a(n),b(n);
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;++i)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;++i)
    {
        job[a[i]].pb(b[i]);
    }
    int emp=0;
    vector<int>ex;
    for(int i=1;i<=k;++i)
    {
        if(job[i].empty())
        {
            emp++;
        }
        else
        {
            sort(all(job[i]));
            for(int j=0;j<job[i].size()-1;++j)
            {
                ex.pb(job[i][j]);
            }
        }
    }
    sort(all(ex));
    ll ans=0;
    for(int i=0;i<emp;++i)
    {
        ans+=ex[i];
    }
    cout<<ans<<'\n';
}



