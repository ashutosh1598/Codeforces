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

const int maxn=110;
int re[maxn][maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        int r;
        cin>>r;
        while(r--)
        {
            int x;
            cin>>x;
            re[i][x]=1;
        }
    }
    set<int>ans;
    for(int i=0;i<maxn;++i)
    {
        int inc=1;
        for(int st=0;st<n;++st)
        {
            if(re[st][i]==0)
            {
                inc=0;
            }
        }
        if(inc)ans.insert(i);
    }
    for(int x:ans)cout<<x<<' ';
    cout<<'\n';
}
