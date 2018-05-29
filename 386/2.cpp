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
#include"unordered_set"
#include"map"
#include"unordered_map"
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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string x;
    cin>>x;
    list<char>my;
    for(int i=0;i<n;++i)
    {
        if(n%2)
        {
            if(i%2)
            {
                my.push_front(x[i]);
            }
            else my.push_back(x[i]);
        }
        else
        {
            if(i%2)
            {
                my.push_back(x[i]);
            }
            else my.push_front(x[i]);
        }
    }
    cout<<string(my.begin(),my.end())<<'\n';
}
