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
const int maxn=1e5;
int r[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a=1,b=1;
    r[1]=1;
    while(a<maxn/8)
    {
        int c=a+b;
        a=b;
        b=c;
        r[b]=1;
    }
    for(int i=1;i<=n;++i)
    {
        if(r[i])
        {
            cout<<'O';
        }
        else cout<<'o';
    }
    cout<<'\n';
}
