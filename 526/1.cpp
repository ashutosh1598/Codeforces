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

const int maxn=100+10;
int re[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>re[i];
    }
    int mi=1e9;
    for(int x=1;x<=n;++x)
    {
        int co=0;
        for(int i=1;i<=n;++i)
        {
            co+=re[i]*(abs(x-i)+i-1+x-1 +x-1+i-1+abs(x-i));
        }
        mi=min(mi,co);
    }
    cout<<mi<<'\n';
}
