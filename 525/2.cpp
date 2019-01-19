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
    ll n,k;
    cin>>n>>k;
    vector<ll>re(n);
    for(int i=0;i<n;++i)
    {
        cin>>re[i];
    }
    sort(all(re));
    ll sub=0;
    ll ind=0;
    for(int i=0;i<k;++i)
    {
        while(ind<n&&re[ind]-sub<=0)
        {
            ind++;
        }
        if(ind>=n)
        {
            cout<<"0\n";
        }
        else
        {
            cout<<re[ind]-sub<<'\n';
            sub+=re[ind]-sub;
        }
    }
}
