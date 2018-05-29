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
    int n,a;
    cin>>n>>a;
    map<int,int>my;
    set<int>rem;
    int ca=0;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        if(x==a)
        {
            ++ca;
        }
        else
        {
            if(rem.find(x)!=rem.end())
                continue;
            my[x]++;
            if(my[x]<=ca)
            {
                my.erase(x);rem.insert(x);
            }
        }
    }
    if(my.empty())
    {
        cout<<"-1\n";return 0;
    }
    else
    {
        for(auto it:my)
        {
            if(it.second>=ca)
            {
                cout<<it.first<<'\n';
                return 0;
            }
        }
    }
    cout<<"-1\n";
}
