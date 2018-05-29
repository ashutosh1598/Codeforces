#include"iostream"
#include"cmath"
#include"vector"
#include"algorithm"
#include"set"
#include"map"
#include"string"
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,sum=0;cin>>m;
    vector<int>rec(m);
    int tot=0;
    for(int i=0;i<m;++i)
    {
        cin>>rec[i];
        tot+=rec[i];
    }
    int x,y;cin>>x>>y;
    for(int i=0;i<=m;++i)
    {
        sum+=rec[i];
        if(sum>=x&&sum<=y&&(tot-sum)>=x&&(tot-sum)<=y)
        {
            cout<<i+2<<'\n';
            return 0;
        }
    }
    cout<<"0\n";
}
