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
    cin>>x;
    vector<string>re(5);
    for(int i=0;i<5;++i)cin>>re[i];
    for(int i=0;i<5;++i)
    {
        string y=re[i];
        if(x[1]==y[1]||x[0]==y[0])
        {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
}
