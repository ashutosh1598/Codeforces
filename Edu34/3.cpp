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
    list<int>pp;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        pp.pb(x);
    }
    pp.sort();
    auto i1=pp.begin();
    auto i2=pp.begin();
    while(1)
    {
        int x=*i1;
        while(i2!=pp.end()&&*i2<=x)
        {
            i2++;
        }
        if(i2==pp.end())break;
        i2++;
        i1=pp.erase(i1);
    }
    cout<<pp.size()<<'\n';
}
