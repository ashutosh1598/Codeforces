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
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>r(n+1,0);
    map<int,int>my;
    ull p=0,ne=0; 
    for(int i=1;i<=n;++i)
    {
        cin>>r[i];
        int x=r[i];
        ll ad=0;
        ad-=my[x-1]* (1);
        ad-=my[x+1]* (-1);
        ad+=1LL*x*(i-1);
        ad-=1LL*x*(n-i);
        if(ad<0)ne+=-ad;
        else p+=ad;
        my[x]++;
    }
    if(p>=ne)
    {
        cout<<p-ne<<'\n';
    }
    else cout<<'-'<<ne-p<<'\n';
}
