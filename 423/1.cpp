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
    ll n,a,b,c=0,ans=0;
    cin>>n>>a>>b;
    for(int i=0;i<n;++i)
    {
        int t;cin>>t;
        if(t==1)
        {
            if(a>0)
            {
                a--;
            }
            else if(b>0)
            {
                b--;
                c++;
            }
            else if(c>0)
            {
                c--;
            }
            else 
            {
                ans++;
            }
        }
        else if(t==2)
        {
            if(b>0)
            {
                b--;
            }
            else
            {
                ans+=2;
            }
        }
    }
    cout<<ans<<'\n';
}









