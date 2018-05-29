#include"iostream"
#include"cmath"
#include"vector"
#include"algorithm"
#include"set"
#include"map"
#include"string"
using namespace std;
typedef long long ll;
struct cou
{
    ll poss,b;
    bool operator<(const cou&ob)const
    {
        return b<ob.b;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,r,avg,sum=0;
    cin>>n>>r>>avg;
    vector<cou> rec(n);
    for(int i=0;i<n;++i)
    {
        ll a,b;cin>>a>>b;
        rec[i].poss=r-a;
        rec[i].b=b;
        sum+=a;
    }
    if(sum>=n*avg)
    {
        cout<<"0\n";return 0;
    }
    sort(rec.begin(),rec.end());
    ll def=n*avg-sum,ans=0;
    for(int i=0;i<n;++i)
    {
        if(rec[i].poss!=0)
        {
            if(rec[i].poss>=def)
            {
                ans+=def*rec[i].b;
                def=0;break;
            }
            else
            {
                ans+=rec[i].poss*rec[i].b;
                def-=rec[i].poss;
            }
        }
    }
    cout<<ans<<'\n';
}
