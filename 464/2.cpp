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
    ll n,k;
    cin>>n>>k;
    //vector<ll>a(k);
    ll ty=-1,am=-1,val=-1;
    for(int i=0;i<k;++i)
    {
        //cin>>a[i];
        ll ai;
        cin>>ai;
        ll th=(n/ai)*ai;
        if(th>am)
        {
            val=ai;
            am=th;
            ty=i+1;
        }
    }
    cout<<ty<<' '<<n/val<<'\n';
}
