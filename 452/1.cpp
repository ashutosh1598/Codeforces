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
#define sdfk dskjflsdkffljsdf
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c1=0,c2=0;
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        x==1?c1++:c2++;
    }
    int ans=0;
    if(c1<=c2)
    {
        ans=c1;
    }
    else
    {
        ans=c2;
        c1-=c2;
        ans+=c1/3;
    }
    cout<<ans<<'\n';
}
