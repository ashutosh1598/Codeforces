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
    int n,k;cin>>n>>k;
    vector<int>rec(n);
    for(int i=0;i<n;++i)
    {
        cin>>rec[i];
    }
    if(k>n)
        k=n;
    int pai=2*(n-k);
    int ans=0;
    for(int i=0;i<pai/2;++i)
    {
        int s=rec[i]+rec[pai-i-1];
        ans=max(ans,s);
    }
    for(int i=pai;i<n;++i)
    {
        ans=max(ans,rec[i]);
    }
    cout<<ans<<'\n';
}
