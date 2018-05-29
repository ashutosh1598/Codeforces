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
    string x;
    cin>>x;
    for(int i=1;i<n;++i)
    {
        if(x[i]!='?'&&x[i]==x[i-1])
        {
            cout<<"No\n";
            return 0;
        }
    }
    for(int i=0;i<n;++i)
    {
        if(x[i]=='?')
        {
            if(i==0||i==n-1)
            {
                cout<<"Yes\n";
                return 0;
            }
            int cas=3;
            if(i-1>=0&&x[i-1]!='?')
            {
                cas--;
            }
            if(i+1<n&&x[i-1]!='?')
            {
                cas--;
            }
            if(i-1>=0&&i+1<n&&x[i-1]!='?'&&x[i-1]==x[i+1])
            {
                cas++;
            }
            if(cas>=2)
            {
                cout<<"Yes\n";
                return 0;
            }
        }
    }
    cout<<"No\n";
}









