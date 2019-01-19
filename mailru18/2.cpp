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
const int maxn=1e5+5;
int re[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    set<int>my;
    int cu=-1;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        if(cu+1>=x)
        {
            my.insert(x);
        }
        else
        {
            cout<<i+1<<'\n';
            exit(0);
        }
        while(my.find(cu+1)!=my.end())
        {
            cu++;
        }
    }
    cout<<"-1\n";
}
