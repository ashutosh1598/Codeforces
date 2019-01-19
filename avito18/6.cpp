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

const int maxn=310;
char st[maxn];
int n;
int q(int l,int r)
{
    cout<<"? "<<l<<' '<<r<<endl;
    int ones;
    cin>>ones;
    return ones;
}
void pr(string &s)
{
    cout<<"! ";
    for(int i=1;i<=n;++i)cout<<st[i];
    cout<<endl;
    return 0;
}
int pre[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>n>>t;
    int totone=t;
    for(int i=1;i<=n;++i)
    {
        while(1)
        {
            int ones=qu(1,i);
            if(ones==n-totone)
            {
                qu(1,n);
                continue;
            }
            pre[i]=i-ones;
            break;
        }
    }
    for(int i=1;i<=n;++i)
    {
        st[i]='0';
        if(pre[i]>pre[i-1])
        {
            st[i]='1';
        }
    }
}






