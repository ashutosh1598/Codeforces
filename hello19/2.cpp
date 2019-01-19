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
    vector<int>ai(n);
    for(int i=0;i<n;++i)
    {
        cin>>ai[i];
    }
    int m= (1<<n)-1;
    for(int mask=0;mask<=m;++mask)
    {
        int tot=0;
        for(int j=0;j<n;++j)
        {
            if( mask&(1<<j) )
            {
                tot+=ai[j];
            }
            else
            {
                tot-=ai[j];
            }
        }
        tot%=360;
        tot+=360;
        tot%=360;
        if(tot==0)
        {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
}








