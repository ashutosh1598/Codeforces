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
#define sdklfj sdkfjlsdkjfl
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
int da[]={-1,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>se;
    int y=2001,m=1;
    while(y<=2007)
    {
        if(m!=2)
        {
            se.pb(da[m]);
        }
        else
        {
            if(y==2004)
            {
                se.pb(29);
            }
            else
            {
                se.pb(28);
            }
        }
        m++;
        if(m==13)
        {
            m=1;
            y++;
        }
    }
    int n;
    cin>>n;
    vector<int>re(n);
    for(int i=0;i<n;++i)cin>>re[i];
    int m1=se.size();
    for(int i=0;i+n-1<=m1-1;++i)
    {
        int ok=1;
        for(int j=0;j<n;++j)
        {
            if(re[j]!=se[i+j])
            {
                ok=0;
                break;
            }
        }
        if(ok)
        {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
}


















