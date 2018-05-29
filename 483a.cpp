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
    ll l,r;cin>>l>>r;
    if(r-l<2)
    {
        cout<<"-1\n";
    }
    else if(r-l>2)
    {
        if(l%2!=0)
            ++l;
        cout<<l<<' '<<l+1<<' '<<l+2<<'\n';
    }
    else if(r-l==2)
    {
        if(l%2==0)
        {
            cout<<l<<' '<<l+1<<' '<<l+2<<'\n';
        }
        else cout<<"-1\n";
    }
}
