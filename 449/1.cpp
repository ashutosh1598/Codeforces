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
    string x;
    int n,m;
    cin>>n>>m;
    cin>>x;
    while(m--)
    {
        int l,r;
        char c1,c2;
        cin>>l>>r>>c1>>c2;
        for(int i=l-1;i<=r-1;++i)
        {
            if(x[i]==c1)x[i]=c2;
        }
    }
    cout<<x<<'\n';

}
