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


vector<int>bd(20,-1);

ll solve(vector<int>cons,int i,vector<int>&r)
{
    for(int j=9;j>=0;--j)
    {
        if(:
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b;
    cin>>a>>b;
    vector<int>r(10,0);
    ll te=a;
    while(te)
    {
        r[te%10]++;
        te/=10;
    }
    te=b;
    int i=0;
    while(te)
    {
        bd[i++]=te%10;
        te/=10;
    }
    i--;
    for(int j=0;j<=i/2;++j)
    {
        swap(bd[j],bd[i-j]);
    }
    vector<int>cons(20,-1);
    solve(cons,0,r);
}








