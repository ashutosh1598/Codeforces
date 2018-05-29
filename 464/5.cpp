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
    ll q;
    cin>>q;
    ll ma=-1;
    vector<ll>sma;
    ll k=0;
    ld psum=0;
    cout<<fixed<<setprecision(20);
    ld ans=0;
    while(q--)
    {
        ll t;
        cin>>t;
        if(t==1)
        {
            ll x;
            cin>>x;
            ans+=(x-ma)*(1-1/((ld)k+1));
            ma=x;
            //cout<<ma<<' '<<ans<<" ma ans\n";
            while(k<(int)sma.size()&&  ma -     (psum+ma+sma[k])/(k+2)>ans)
            {
                if(ma==5)
                {
                    //cout<<ans<<'\n';
                }
                ans=ma-     (psum+ma+sma[k])/(k+2);
                psum+=sma[k];
                k++;
                //cout<<ans<<' '<<ma<<' '<<k<<" ans ma k\n";
            }
            sma.pb(x);
        }
        else if(t==2)
        {
            cout<<ans<<'\n';
        }
    }
}
/*
   6
   1 3
   2
   1 4
   2
   1 8
   2
*/
