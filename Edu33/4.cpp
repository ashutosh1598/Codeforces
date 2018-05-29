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
    ll n,d;
    cin>>n>>d;
    vector<ll>re(n),suf(n,0); 
    for(int i=0;i<n;++i)cin>>re[i];
    for(int i=n-1;i>=0;--i)
    {
        suf[i]=re[i];
        if(i<n-1)
        {
            suf[i]+=suf[i+1];
        }
    }
    ll cu=0;
    for(int i=0;i<n;++i)
    {
        ll a=re[i];
        if(a!=0)
        {
            cu+=a;
        }
        if(a==0)
        {
            if(cu<0)
            {
                cu=0;
            }
        }
        if(cu>d)
        {
            cout<<"-1\n";
            return 0;
        }
    }
    cu=0;
    for(int i=0;i<n;++i)
    {

    }
        
}











