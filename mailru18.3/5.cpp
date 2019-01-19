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

string s,t;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s>>t;
    vector<int>my;
    int count=1;
    for(int i=1;i<s.length();++i)
    {
        if(s[i]!=s[i-1])
        {
            my.pb(count);
            count=1;
        }
        count++;
    }
    my.pb(count);
    vectpr<int>zeros,ones;
    for(int i=0;i<my.size();++i)
    {
        if(i%2==0)zeros.pb(my[i]);
        else ones.pb(my[i]);
    }

}
