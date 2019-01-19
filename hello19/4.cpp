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

ll gcd(ll a,ll b,ll &x,ll &y)
{
	if(b==0)
	{
		x=1;
		y=0;
		return a;
	}
	else 
	{
		ll ans=gcd(b,a%b,x,y);
		ll te=x;
		x=y;
		y=te-(a/b)*y;
		return ans;
	}
}
ll inv(ll a,ll b)
{
	ll x,y;
	ll gc=gcd(a,b,x,y);
	return ((x%b)+b)%b;
}

const ll mo=1e9+7;
const int maxk=1e4+3;
const int maxpo=53;

ll dp[maxpo][maxpo][maxk];

void init()
{
    for(int k=0;k<maxk;++k)
    {
        for(int alp=0;alp<maxpo;++alp)
        {
            ll alpin = inv(alp+1,mo);
            for(int bet=0;bet<=alp;++bet)
            {
                if(k==0)
                {
                    if(alp==bet)
                    {
                        dp[alp][bet][k]=1;
                    }
                }
                else
                {
                    if(alp==bet)
                    {
                        dp[alp][bet][k]= ( alpin*dp[alp][bet][k-1] )%mo;
                    }
                    else
                    {
                        dp[alp][bet][k]=  (  alpin*(   dp[alp][bet][k-1] +( (alp)*dp[alp-1][bet][k] )%mo  )  )%mo;
                    }
                }
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    init();
    ll n,k;
    cin>>n>>k;

    ll up=sqrt(n+0.2)+2;

    ll i=2;
    ll ans=1;
    while(i<=up)
    {
        int co=0;
        while(n%i==0)
        {
            co++;
            n/=i;
        }
        ll contr=0;
        if(co)
        {
            ll ppow=1;
            for(int j=0;j<=co;++j)
            {
                contr+=dp[co][j][k]* ppow;
                ppow*=i;
                ppow%=mo;
            }
            contr%=mo;
            ans*=contr;
            ans%=mo;
        }
        i++;
    }
    if(n>1)
    {
        int co=0;
        i=n;
        while(n%i==0)
        {
            co++;
            n/=i;
        }
        ll contr=0;
        if(co)
        {
            ll ppow=1;
            for(int j=0;j<=co;++j)
            {
                contr+=dp[co][j][k]* ppow;
                ppow*=i;
                ppow%=mo;
            }
            contr%=mo;
            ans*=contr;
            ans%=mo;
        }

    }
    ans=(ans%mo + mo)%mo;
    cout<<ans<<'\n';
}







