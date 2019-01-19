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
    int n,k;
    cin>>n>>k;
    vector<int>re(n);
    int ss=0,ee=0;
    for(int i=0;i<n;++i)
    {
        cin>>re[i];
        if(re[i]==1)ee++;
        else ss++;
    }
    int ans=0;
    for(int b=0;b<k;++b)
    {
        int e=0,s=0;
        for(int c=b;c<n;c+=k)
        {
            if(re[c]==1)e++;
            else s++;
        }
        //cout<<b<<' '<<abs(e-s)<<" b e-s\n";
        ans=max(ans,abs(ee-e-(ss-s))  );
    }
    cout<<ans<<'\n';
}
