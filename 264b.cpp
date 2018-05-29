#include"iostream"
#include"cmath"
#include"vector"
#include"algorithm"
#include"set"
#include"map"
#include"string"
using namespace std;
typedef long long ll;
int rec[100005],dp[100005];
int gcd(int x,int y)
{
    if(y==0)
        return x;
    else return gcd(y,x%y);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    for(int i=0;i<n;++i)
        cin>>rec[i];
    dp[n-1]=1;
    dp[n]=0;
    int max1=0;
    for(int i=n-2;i>=0;--i)
    {
        for(int j=i+1;j<n;++j)
        {

        }
    }
    cout<<dp[0]<<'\n';
}
