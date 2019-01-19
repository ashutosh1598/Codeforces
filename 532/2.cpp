#include"iomanip"
#include"iostream"
#include"limits"
#include"cmath"
#include"vector"
#include"algorithm"
#include"list"
#include"queue"
#include"stack"
#include"set"
#include"map"
#include"string"
#include"cstring"
#include"assert.h"
using namespace std;
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define mp make_pair
#define pb push_back
#define mset(a,b) memset(a,b,sizeof(a))
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
set<int>re;
multiset<int>pr;
int n,m;
void init()
{
    for(int i=1;i<=n;++i)
    {
        if(pr.find(i)==pr.end())
        {
            re.insert(i);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    init();
    for(int i=0;i<m;++i)
    {
        int x;
        cin>>x;
        pr.insert(x);
        if(re.find(x)!=re.end())
        {
            re.erase(x);
        }
        if(re.empty())
        {
            cout<<'1';
            for(int j=1;j<=n;++j)
            {
                auto it = pr.find(j);
                assert(it!=pr.end());
                pr.erase(it);
            }
            init();
        }
        else
        {
            cout<<'0';
        }
    }
    cout<<'\n';
}





