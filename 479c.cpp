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
struct ex
{
    int a,b;
    bool operator<(const ex & ob)const
    {
        return a==ob.a?b<ob.b:a<ob.a;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    vector<ex>rec(n);
    for(int i=0;i<n;++i)
    {
        int a,b;cin>>a>>b;
        ex ob;
        ob.a=a;
        ob.b=b;
        rec[i]=ob;
    }
    sort(rec.begin(),rec.end());
    int ans=0,m=0;
    for(int i=0;i<n;++i)
    {
        if(i>0&&rec[i].b<m)
        {
            ans=rec[i].a;
            m=rec[i].a;
        }
        else
        {
            ans=rec[i].b;
            m=rec[i].b;
        }
    }
    /*
    if(n>1&&rec[n-1].b>)
    {
        cout<<rec[n-1].b<<'\n';
    }*/
    cout<<ans<<'\n';
}
