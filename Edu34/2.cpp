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
    int h1,a1,c1,h2,a2;
    cin>>h1>>a1>>c1>>h2>>a2;
    list<int>pp;
    while(1)
    {
        if(h2<=a1||h1>a2)
        {
            pp.pb(1);
            h2-=a1;
        }
        else
        {
            pp.pb(0);
            h1+=c1;
        }
        if(h2<=0)break;
        h1-=a2;
    }
    cout<<pp.size()<<'\n';
    for(int x:pp)
    {
        puts(x?"STRIKE":"HEAL");
    }
}
