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
    ll x,y;cin>>x>>y;
    set<ll>m;
    for(int i=0;i<18;++i)
    {
        for(int j=0;j<18;++j)
        {
            m.insert(pow(x,i)+pow(y,j));
        }
    }
    for(auto i=m.begin();i!=m.end();++i)
    {
        cout<<*i<<'\n';
    }
}
