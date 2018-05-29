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
    int n;cin>>n;
    ll low=0,high=n;
        while(low+1!=high)
        {
            ll k=(low+high)/2;
            if(k*(k+1)*(k+2)/6>n)
            {
                high=k;
            }
            else low=k;
        }
        if(n==1)cout<<1<<'\n';
        else cout<<low<<'\n';
}
