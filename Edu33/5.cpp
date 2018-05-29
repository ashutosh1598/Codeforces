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
const int N = 1000000+10;
const ll mo=1e9+7;
int lp[N+1];
vector<int> pr;
void build()
{
    ///////// TAKEN from emaxx
for (int i=2; i<=N; ++i)
{
	if (lp[i] == 0) {
		lp[i] = i;
		pr.push_back (i);
	}
	for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
		lp[i * pr[j]] = pr[j];
}
}
ll ex(ll a,ll b)
{
    a%=mo;
    if(b==0)return 1;
    else if(b%2==0)return ex(  (a*a)%mo,b/2);
    else return  (a* ex( (a*a)%mo,b/2) )%mo;
}
//ll ch[N+20][22];
ll init(int i,int k)
{
    //int up=1e6+20+10;
    if(k==0)return 1;
    if(k==1)return i;
    /*
    for(int i=1;i<up;++i)
    {
        ch[i][0]=1;
        ch[i][1]=i;
        */
        ll cu=i;
        for(int j=2;j<=k;++j)
        {
            cu=(cu*(i-j+1))%mo*inv(j,mo);
            cu%=mo;
            //ch[i][j]=cu;
        }
        return cu;
}
int main()
{
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    cin>>t;
    build();
    //cout<<init(3,2)<<'\n';
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        list<int>alp;
        while(x>=2)
        {
            int mip=lp[x];
            if(mip==0)
            {
                alp.pb(1);
                break;
            }
            int cu=0;
            while(x>1&&lp[x]==mip)
            {
                x/=mip;
                cu++;
            }
            alp.pb(cu);
            if(x<2)break;
        }
        ll ans=ex(2,y-1);
        for(int al:alp)
        {
            ans=ans*init(al+y-1,al);
            ans%=mo;
        }
        cout<<ans<<'\n';
    }
}





