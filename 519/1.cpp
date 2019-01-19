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
const int maxn=105;
ll re[maxn];
ll k;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    k=-1;
    ll n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>re[i];
        k=max(k,re[i]);
    }
    while(1)
    {
        ll aw=0,el=0;
        for(int i=0;i<n;++i)
        {
            aw+=k-re[i];
            el+=re[i];
        }
        if(aw>el)
        {
            cout<<k<<'\n';
            exit(0);
        }
        k++;
    }
}
