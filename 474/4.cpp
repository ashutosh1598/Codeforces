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
ll f1[100],f2[100];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll q;
    cin>>q;
    while(q--)
    {
        ll t,x,k;
        cin>>t;
        if(t==1)
        {
            cin>>x>>k;
            ll n1=0;
            while( (1LL<<n1)<=x)
            {
                n1++;
            }
            n1--;
            ll me=(1LL<<(n1));
            k=(k%me+me)%me;
            f1[n1]+=k;
            f1[n1]=(f1[n1]%me+me)%me;
        }
        else if(t==2)
        {
            cin>>x>>k;
            ll n1=0;
            while( (1LL<<n1)<=x)
            {
                n1++;
            }
            n1--;
            /*
            ll me=(1LL<<n1);
            k=(k%me+me)%me;
            f2[n1]+=k;
            f2[n1]=(f2[n1]%me+me)%me;
            */
            ll me=(1LL<<(n1));
            k=(k%me+me)%me;
            while(n1<=62)
            {
                me=(1LL<<(n1));
                f2[n1]+=k;
                f2[n1]=(f2[n1]%me+me)%me;
                k*=2;
                n1++;
            }
        }
        else if(t==3)
        {
            cin>>x;
            ll n1=0;
            while( (1LL<<n1)<=x)
            {
                n1++;
            }
            n1--;
            ll me=(1LL<<(n1));
            ll val=x;
            ll pos=(x+f1[n1])%me;
            pos=(pos+f2[n1])%me+me;
            while(n1>=0)
            {
                cout<<val<<' ';
                pos/=2;
                n1--;
                if(n1==-1)break;
                ll me=(1LL<<n1);
                val=(pos)%me;
                val=(val-f1[n1])%me;
                val=(val-f2[n1])%me;
                val=(val+me)%me+me;
            }
            cout<<'\n';
        }
    }
}










