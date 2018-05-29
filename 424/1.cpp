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
#include"unordered_set"
#include"map"
#include"unordered_map"
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
    int prev;
    cin>>prev;
    int s=-1;
    int a=true;
    for(int i=0;i<n-1;++i)
    {
        int x;
        cin>>x;
        if(x>prev)
        {
            if(s==-1||s==0)
                s=0;
            else 
            {
                a=false;break;
            }
        }
        else if(x==prev)
        {
            if(s==-1||s==0||s==1)
            {
                s=1;
            }
            else
            {
                a=false;break;
            }
        }
        if(x<prev)
        {
            s=2;
        }
        prev=x;
    }
    if(a)
        cout<<"YES\n";
    else cout<<"NO\n";
}








