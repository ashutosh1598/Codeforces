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
const int maxn=2e5+4;
int km=0;
int re[maxn],prex[maxn];
int mask(int x)
{
    return (~x)&km;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;++i)
    {
        km=km|(1<<i);
    }
    for(int i=0;i<n;++i)
    {
        cin>>re[i];
    }
    if(re[0]==0)
    {
        re[0]=mask(re[0]);
    }
    map<int,int>my;
    my[re[0]]++;
    my[0]++;
    prex[0]=re[0];
    ll ans=0;
    for(int i=1;i<n;++i)
    {
        int no=my[re[i]^prex[i-1]];
        int rev=my[mask(re[i])^prex[i-1]];
        /*
        if(re[i]^prex[i-1]==0)
        {
            no++;
        }
        if(mask(re[i])^prex[i-1]==0)
        {
            rev++;
        }
        */
        if(no<rev)
        {
            ans+=no;
            prex[i]=re[i]^prex[i-1];
            my[prex[i]]++;
        }
        else
        {
            ans+=rev;
            re[i]=mask(re[i]);
            prex[i]=re[i]^prex[i-1];
            my[prex[i]]++;
        }
    }
    ans=1LL*n*(n+1)/2-ans;
    cout<<ans<<'\n';
}

