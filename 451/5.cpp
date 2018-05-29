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
const int maxn=2e5+10;
ll r[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>r[i];
    }

    list<ll>ns,as;
    for(int i=0;i<n;++i)
    {
        ll a=sqrt(r[i]+0.3);
        if(a*a==r[i])
        {
            as.pb(i);
        }
        else ns.pb(i);
    }
    /*
    cout<<"squares\n";
    for(ll x:as)
    {
        cout<<r[x]<<" xxx\n";
    }
    cout<<"\nnot squares\n";
    for(ll x:ns)
    {
        cout<<r[x]<<" xxx\n";
    }
    */
    if(as.size()==ns.size())
    {
        cout<<"0\n";
        return 0;
    }
    if(as.size()>n/2)
    {
        ll red=as.size()-n/2;
        ll c0=0,cn=0;
        for(ll x:as)
        {
            ll x1=r[x];
            if(x1==0)
                c0++;
            else
                cn++;
        }
        if(cn>=red)
        {
            cout<<red<<'\n';
        }
        else
        {
            red-=cn;
            ll ans=cn;
            ans+=red*2;
            cout<<ans<<'\n';
        }
        return 0;
    }
    ll red=ns.size()-n/2;
    ll co=0,ans=0;
    list<ll>st;
    for(ll x:ns)
    {
        ll x1=r[x];
        ll y=sqrt(x1);
        ll tak=(y+1)*(y+1)-x1;
        if(x1>0)
        {
            tak=min(tak,x1-y*y);
        }
        //cout<<x1<<' '<<(y+1)*(y+1)<<' '<<tak<<" x1 (y+1)^2 tak\n";
        st.pb(tak);
    }
    st.sort();
    for(ll x:st)
    {
        ans+=x;
        co++;
        if(co==red)
        {
            break;
        }
    }
    cout<<ans<<'\n';
}



















