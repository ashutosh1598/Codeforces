#include"iostream"
#include"cmath"
#include"vector"
#include"algorithm"
#include"list"
#include"set"
#include"unordered_set"
#include"map"
#include"unordered_map"
#include"string"
#include"cstring"
#include"iomanip"
using namespace std;
typedef long long ll;
const ll maxn=105;
ll rec[maxn][maxn];
ll col[105];
ll row[105];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;cin>>n>>m;
    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
            cin>>rec[i][j];
    ll min1=1e9,pos=-1;
    for(int i=0;i<m;++i)
    {
        if(rec[0][i]<min1)
        {
            min1=rec[0][i];pos=i;
        }
    }
    ll ans=0;
    for(int j=0;j<m;++j)
    {
        if(j==pos)
            continue;
        col[j]=   (rec[0][j]-rec[0][pos]);ans+=col[j];
        for(int i=0;i<n;++i)
        {
            if(rec[i][j]-rec[i][pos]!=col[j])
            {
                cout<<"-1\n";
                return 0;
            }
            rec[i][j]=rec[i][pos];
        }
    }
    for(int i=0;i<n;++i)
    {
        row[i]=rec[i][0];ans+=row[i];
        if(row[i]<0)
        {
            cout<<"-1\n";return 0;
        }
        for(int j=1;j<m;++j)
        {
            if(rec[i][j]!=rec[i][j-1])
            {
                cout<<"-1\n";
                return 0;
            }
        }
    }
    cout<<ans<<'\n';
    for(int i=0;i<105;++i)
    {
        while(row[i]--)
        {
            cout<<"row "<<i+1<<'\n';
        }
        while(col[i]--)
        {
            cout<<"col "<<i+1<<'\n';
        }
    }
}









