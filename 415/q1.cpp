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
    double n,k;cin>>n>>k;
    vector<double>rec(n);
    int sum=0;
    for(int i=0;i<n;++i)
    {
        cin>>rec[i];
        sum+=rec[i];
    }
    double temp=(double)(k-0.5)*n;
    if(sum>=temp)
    {
        cout<<"0\n";
        return 0;
    }
    int ans=2*((k-0.5)*n-sum);
    cout<<ans<<"\n";
}
