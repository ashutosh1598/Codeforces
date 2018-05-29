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
    int n,k;
    scanf("%d%d",&n,&k);
    int ans=100000000;
    for(int i=0;i<n;++i)
    {
        int a;
        scanf("%d",&a);
        if(k%a==0)
        {
            ans=min(ans,k/a);
        }
    }
    printf("%d\n",ans);
}
