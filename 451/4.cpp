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
const int maxn=1e6+10;
ll re[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,k;
    cin>>n>>m>>k;
    for(int i=0;i<n;++i)
    {
        ll x;
        cin>>x;
        re[x]++;
    }
    ll ans=0;
    ll l=1;
    ll r=1;
    ll al=0;
    stack<ll>st;
    for(r=1;r<=m;++r)
    {
        al+=re[r];
        if(re[r]>0)st.push(r);
    }
    r=m;
    while(r<1e6+5)
    {
        while(al>=k)
        {
            ll in=st.top();
            if(al-re[in]>=k)
            {
                st.pop();
                ans+=re[in];
                al-=re[in];
                re[in]=0;
            }
            else
            {
                st.pop();
                ans+=al-(k-1);
                re[in]-=(al-(k-1));
                al=k-1;
                if(re[in]>0)
                    st.push(in);
            }
        }
        al-=re[l];
        al+=re[r+1];
        if(re[r+1]>0)
            st.push(r+1);
        l++;
        r++;
    }
    cout<<ans<<'\n';
}
