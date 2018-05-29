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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>l(n),r(n),ans(n,0);
        for(int i=0;i<n;++i)
        {
            cin>>l[i]>>r[i];
        }
        int ti=1;
        for(int i=0;i<n;++i)
        {
            if(r[i]<ti)continue;
            while(ti<l[i])ti++;
            ans[i]=ti;
            ti++;
        }
        for(int i=0;i<n;++i)
        {
            if(i)cout<<' ';
            cout<<ans[i];
        }
        cout<<'\n';
    }
}
