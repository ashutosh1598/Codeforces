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
ll que(ll va)
{
    cout<<"? "<<va<<endl;
    ll x;
    cin>>x;
    return x;
}
void print(ll x)
{
    cout<<"! "<<x<<endl;
    exit(0);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    if( (n/2)%2==1)
    {
        print(-1);
    }

    ll ha = n/2;
    ll one=que(1),mid=que(1+n/2);
    ll inc =1;
    if(mid>one)inc=1;
    else inc =-1;
    if(one == mid)
    {
        print(1);
    }
    ll lo = 2,high = n/2;

    while(lo<high)
    {
        ll m = (lo+high)/2;
        ll valm = que(m);
        ll vnn = que(m+n/2);
        if(valm==vnn)
        {
            print(m);
        }
        if(vnn>valm)
        {
            if(inc ==1)
            {
                lo = m+1;
            }
            else high = m-1;
        }
        else
        {
            if(inc ==1)
            {
                high = m-1;
            }
            else lo = m+1;
        }
    }
    print(lo);
}
