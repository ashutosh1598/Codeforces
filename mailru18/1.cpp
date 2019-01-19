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
    ll x,y,z,t1,t2,t3;
    cin>>x>>y>>z>>t1>>t2>>t3;
    ll st=abs(y-x)*t1;
    ll el=-1;
    if(z==x)
    {
        el=t3+t3+abs(y-x)*t2+t3;
    }
    else
    {
        el=abs(z-x)*t2+t3+t3+abs(y-x)*t2+t3;
    }
    if(el>st)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
    }
}
