#include"iostream"
#include"cmath"
#include"vector"
#include"algorithm"
#include"set"
#include"map"
#include"string"
#include"unordered_set"
#include"unordered_map"
using namespace std;
typedef long long ll;
int mark[1001][1001],cap[1001][1001];
int mark1[1001],cap1[1001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;cin>>n>>m;
    for(int i=0;i<n;++i)
    {
        int color,dia;cin>>color>>dia;
        mark[dia][color]++;
        mark1[dia]++;
    }
    for(int i=0;i<m;++i)
    {
        int color,dia;cin>>color>>dia;
        cap[dia][color]++;
        cap1[dia]++;
    }
    ll ans=0,ansb=0;
    for(int i=1;i<=1000;++i)
    {
        ans+=min(cap1[i],mark1[i]);
        for(int j=1;j<=1000;++j)
        {
            ansb+=min(cap[i][j],mark[i][j]);
        }
    }
    cout<<ans<<' '<<ansb;
}
