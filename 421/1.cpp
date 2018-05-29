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
    int c,v,v1,a,l;cin>>c>>v>>v1>>a>>l;
    int da=0;
    int p=0;
    while(1)
    {
        int s=min(v+da*a,v1);
        p=p+s;
        if(da>0)
            p-=l;
        da++;
        if(p>=c)
        {
            cout<<da<<'\n';
            return 0;
        }
    }
}
