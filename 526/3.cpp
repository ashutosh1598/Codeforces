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
    string s;
    cin>>s;
    vector<int>cnt;
    int co=0;
    for(int i=0;i<s.length();++i)
    {
        if(s[i]=='a')
        {
            co++;
        }
        else if(s[i]=='b')
        {
            if(co>0)
            {
                cnt.pb(co);
                co=0;
            }
        }
    }
    if(co>0)cnt.pb(co);
    //for(int i:cnt)cout<<i<<'\n';
    ll ans=1;
    ll mo=1e9+7;
    for(int x:cnt)
    {
        ll y=x;
        ans*=y+1;
        ans%=mo;
    }
    ans--;
    ans=(ans%mo+mo)%mo;
    cout<<ans<<'\n';
}





