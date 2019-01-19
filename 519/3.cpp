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
const int maxn=1000+5;
int re[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;++i)
    {
        string fo=s.substr(0,i+1);
        string ba=fo;
        for(int j=0;j<ba.length();++j)
        {
            ba[j]=fo[ba.length()-1-j];
        }
        if(ba<fo)
        {
            re[i]=1;
            for(int j=0;j<ba.length();++j)
            {
                s[j]=ba[j];
            }
        }
    }
    for(int i=0;i<n;++i)
    {
        if(i)
        {
            cout<<' ';
        }
        cout<<re[i];
    }
    cout<<'\n';
}
