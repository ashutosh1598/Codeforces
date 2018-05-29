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
const int N = 1e7+20;
const int maxn=1e5+5;
int lp[N+1];
vector<int> pr;
void ev()
{
for (int i=2;i<=N;++i)
{
	if (lp[i] == 0) {
		lp[i] = i;
		pr.push_back (i);
	}
	for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
		lp[i * pr[j]] = pr[j];
}
}
ll ai[maxn];
ll bi[maxn];
int mar[N+1];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ev();
    int n;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>ai[i];
        bi[i]=-1;
    }
    int i;
    for(i=1;i<=n;++i)
    {
        ll x=ai[i];
        while(1)
        {
           int cop=1;
           ll zz=x;
           while(x!=1)
           {
               ll y=lp[x];
               x/=y;
               if(mar[y]==1)
               {
                   cop=0;
                   break;
               }
           }
           x=zz;
           if(cop)break;
           x++;
        }
        ll zz=x;
        while(zz!=1)
        {
            mar[lp[zz]]=1;
            zz/=lp[zz];
        }
        bi[i]=x;
        /*
        if(i==4)
        {
            cout<<x<<" i=4\n";
        }
        */
        if(x>ai[i])break;
    }
    ll nu=2;
    for(int j=i+1;j<=n;++j)
    {
        ll x=nu;
        while(1)
        {
           int cop=1;
           ll zz=x;
           while(x!=1)
           {
               ll y=lp[x];
               x/=y;
               if(mar[y]==1)
               {
                   cop=0;
                   break;
               }
           }
           x=zz;
           if(cop)break;
           x++;
        }
        ll zz=x;
        while(zz!=1)
        {
            mar[lp[zz]]=1;
            zz/=lp[zz];
        }
        bi[j]=x;
        nu=x+1;
    }
    for(int j=1;j<=n;++j)
    {
        if(j-1)cout<<' ';
        cout<<bi[j];
    }
}










