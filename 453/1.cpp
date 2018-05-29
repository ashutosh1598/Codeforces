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
    int n,m;
    cin>>n>>m;
    vector<int>di(m+5,0);
    int ri=0;
    for(int i=0;i<n;++i)
    {
        int a,b;
        cin>>a>>b;
        if(a>ri)
        {
            cout<<"NO\n";
            return 0;
        }
        ri=max(ri,b);
    }
    if(ri>=m)cout<<"YES\n";
    else cout<<"NO\n";
}
