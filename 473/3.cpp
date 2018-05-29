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
    //incorrect answer
    if(n<=5)
    {
        cout<<"-1\n";
    }
    else
    {
        cout<<"1 2\n";
        cout<<"2 3\n";
        cout<<"3 4\n";
        cout<<"3 5\n";
        for(int i=6;i<=n;++i)
        {
            cout<<"2 "<<i<<'\n';
        }
    }
    ////correct answer
    for(int i=1;i<=n-1;++i)
    {
        cout<<i<<' '<<i+1<<'\n';
    }
}
