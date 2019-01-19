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
    int x;
    cin>>x;
    for(int a=1;a<=x;++a)
    {
        for(int b=1;b<=a;++b)
        {
            if(a%b!=0||a*b<=x)
                continue;
            if(b>1||a<x)
            {
                cout<<a<<' '<<b<<'\n';
                return 0;
            }
        }
    }
    cout<<"-1\n";
    return 0;
}
