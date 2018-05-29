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
typedef long double ld;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ld n,a;cin>>n>>a;
    cout<<"1 2 ";
    int v=-1;
    ld mind=1e9;
    for(ld k=1;k<=n-2;++k)
    {
        ld te=abs(180.0*k/n-a);
        if(te<mind)
        {
            mind=te;
            v=n+1-k;
        }
    }
    cout<<v<<'\n';
}




