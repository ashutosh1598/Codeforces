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
    ll n,s;
    cin>>n>>s;
    vector<ll>re(n);
    ll sum=0;
    ll mi=1e18;
    for(int i=0;i<n;++i)
    {
        cin>>re[i];
        sum+=re[i];
        mi=min(mi,re[i]);
    }
    if(sum<s)
    {
        cout<<"-1\n";
        return 0;
    }
    for(int i=0;i<n;++i)
    {
        s=s-(re[i]-mi);
        re[i]=mi;
    }
    if(s<=0)
    {
        cout<<re[0]<<'\n';
        return 0;
    }
    cout<<mi-(s+n-1)/n<<'\n';
}






