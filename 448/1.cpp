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
    int n;
    cin>>n;
    vector<int>r(n),p(n,0);
    int tot=0;
    for(int i=0;i<n;++i)
    {
        cin>>r[i];
        p[i]=r[i];
        if(i)p[i]+=p[i-1];
        tot+=r[i];
    }
    int ans=1e8;
    for(int i=0;i<n;++i)
    {
        int sum=0;
        for(int j=i;j<n;++j)
        {
            sum+=r[j];
            ans=min(ans,abs(tot-2*sum));
        }
    }
    cout<<ans<<'\n';


}
