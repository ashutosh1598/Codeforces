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
    int n,r=0,l=0;
    cin>>n;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        if(x>0)r++;
        if(x<0)l++;
    }
    if(r<=1||l<=1)
    {
        cout<<"Yes\n";
    }
    else cout<<"No\n";
}
