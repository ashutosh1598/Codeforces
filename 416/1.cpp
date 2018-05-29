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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b;cin>>a>>b;
    ll n1=sqrt(a);
    ll low=0,high=b;
    while(low<high-1)
    {
        ll mid=(low+high)/2;
        ll t=mid*(mid+1);
        if(t<=b)
        {
            low=mid;
        }
        else
        {
            high=mid;
        }
    }
    ll n2=low;
    if(n1<=n2)
    {
        cout<<"Vladik\n";
    }
    else cout<<"Valera\n";
}
