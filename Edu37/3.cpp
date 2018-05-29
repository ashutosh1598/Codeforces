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
    vector<int>r(n),prma(n),sumi(n);
    for(int i=0;i<n;++i)
    {
        cin>>r[i];
    }
    string pos;
    cin>>pos;
    int ma=-1;
    for(int i=0;i<n;++i)
    {
        ma=max(ma,r[i]);
        prma[i]=ma;
    }
    int mi=1e8;
    for(int i=n-1;i>=0;--i)
    {
        mi=min(mi,r[i]);
        sumi[i]=mi;
    }
    for(int i=0;i<=n-2;++i)
    {
        if(pos[i]=='0')
        {
            if(prma[i]>sumi[i+1])
            {
                cout<<"NO\n";
                return 0;
            }
        }
    }
    cout<<"YES\n";
}









