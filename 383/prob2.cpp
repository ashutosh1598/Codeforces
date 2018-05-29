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
const int maxn=1e5+10;
int rec[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n>>x;
    for(int i=0;i<n;++i)
    {
        int aa;cin>>aa;
        rec[aa]++;
    }
    ll ans=0;
    for(int i=1;i<=1e5;++i)
    {
        int b=i^x;
        if(b>1e5||b<1)
            continue;
        if(b==i)
        {
            ans+=1LL*rec[i]*(rec[i]-1);
        }
        else 
        {
            ans+=1LL*rec[i]*rec[b];
        }
    }
    cout<<ans/2<<'\n';
}





















