#include"iostream"
#include"iomanip"
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
    double n,h;cin>>n>>h;
    for(long double i=1;i<=n-1;i++)
    {
        double ans=sqrt(h*h*i/n);
        cout<< std::setprecision(16) << ans<<" ";
    }
    cout<<endl;
}
