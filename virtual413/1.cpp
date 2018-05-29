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
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    int t1=t*(   (n+k-1)/k);
    int t2=d+t;
    if(t2<t1)
    {
        cout<<"YES\n";
    }
    else cout<<"NO\n";
}
