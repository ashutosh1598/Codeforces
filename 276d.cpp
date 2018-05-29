#include"iostream"
#include"cmath"
#include"vector"
#include"algorithm"
#include"set"
#include"map"
#include"string"
using namespace std;
typedef unsigned long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll l,r;
    cin>>l>>r;
    if(l==r)
    {
        cout<<"0\n";
        return 0;
    }
    ll k;
    for(k=0;k<=63;++k)
    {
        //cout<<k<<" i\n";
        if((1LL<<k)<=r)
            continue;
        else
        {
            --k;
            break;
        }
    }
    if(l<=((1LL<<k)-1))
    {
        cout<<( (1LL<<k) ^ ((1LL<<k)-1)   )<<'\n';
        return 0;
    }
    ll x=k;
    while(x>=0 &&  ( (r&(1LL<<x))   ==  (l&(1LL<<x)) )       )
    {
        x--;
    }
    for(;;--x)
    {
        r=r&(~(1LL<<x));
        l=l|(1LL<<x);
        if(x==0)
            break;
    }
    cout<<(r^l)<<'\n';
    return 0;
}
