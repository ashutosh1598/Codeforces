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
const int maxn=110;
int col[maxn][maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<string>rec(n);
    mset(col,-1);
    for(int i=0;i<n;++i)
        cin>>rec[i];
    int tot=0;
    int north=maxn,east=-1,west=maxn,south=-1;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            if(rec[i][j]=='B')
            {
                tot++;
                north=min(north,i);
                east=max(east,j);
                west=min(west,j);
                south=max(south,i);
            }
        }
    }
    if(tot==0)
    {
        cout<<"1\n";
    }
    else
    {
        int side=1+max(south-north,east-west);
        if(side<=n&&side<=m)
        {
            cout<<side*side-tot<<'\n';
        }
        else cout<<"-1\n";
    }
}






