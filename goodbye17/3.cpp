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
const int maxn=1e3+10;
ll x1[maxn];
ld y2[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,r;
    cin>>n>>r;
    for(int i=0;i<n;++i)
    {
        ll x;
        cin>>x;
        x1[i]=x;
        y2[i]=r;
        for(int j=0;j<i;++j)
        {
            if(abs(x1[j]-x1[i])<=2*r)
            {
                ld xdi=x1[j]-x1[i];
                y2[i]=max(y2[i],y2[j]+sqrt(4*r*r-xdi*xdi));
            }
        }
    }
    cout<<fixed<<setprecision(13);
    for(int i=0;i<n;++i)
    {
        if(i)cout<<' ';
        cout<<y2[i];
    }
    cout<<'\n';
}
