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
    int v1,v2,v3,vm;
    scanf("%d%d%d%d",&v1,&v2,&v3,&vm);
    int ok=1;
    if(2*v1<vm||2*v2<vm||2*v3<vm)
    {
        ok=0;
    }
    if(!(2*v1>2*vm&&2*v2>2*vm))
    {
        ok=0;
    }
    int l=v3,r=2*v3;
    int ans3=-1;
    if(!ok)
    {
        puts("-1");
        return 0;
    }
    for(ans3=vm;ans3<=2*vm;++ans3)
    {
        if(ans3>=l&&ans3<=r)
        {
            printf("%d\n%d\n%d\n",2*v1,2*v2,ans3);
            return 0;
        }
    }
    printf("-1\n");
}







