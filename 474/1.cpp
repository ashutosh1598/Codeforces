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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string x;
    cin>>x;
    int n=x.length();
    //int la=-1,fb=-1,lb=-1,fc=-1;
    int b=-1,c=-1;
    int aa=0,bb=0,cc=0;
    for(int i=0;i<n;++i)
    {
        if(i<n-1)
        {
        if(x[i]!=x[i+1])
        {
            if(b==-1)
            {
                b=i;
            }
            else if(c==-1)
            {
                c=i;
            }
            else
            {
                cout<<"NO\n";
                return 0;
            }
        }
        }
        if(x[i]=='a')aa++;
        if(x[i]=='b')bb++;
        if(x[i]=='c')cc++;
    }
    if(c==-1)
    {
        cout<<"NO\n";
        return 0;
    }
    if(cc==0)
    {
        cout<<"NO\n";
        return 0;
    }
    bool y=x[b]=='a'&&x[b+1]=='b'&&x[c]=='b'&&x[c+1]=='c';
    //cout<<aa<<' '<<bb<<' '<<cc<<" aa bb cc\n";
    //cout<<y<<'\n';
    if(y&&(cc==aa||cc==bb))
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}

















