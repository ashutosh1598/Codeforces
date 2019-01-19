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
int i=29;
int q(int c,int d)
{
    cout<<"? "<<c<<' '<<d<<endl;
    int x;
    cin>>x;
    return x;
}
void p(int a,int b)
{
    cout<<"! "<<a<<' '<<b<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int agb=q(0,0);
    int ca=0,cb=0;
    int lefo=0;
    for(i=29;i>=0;--i)
    {
        if(agb>0)
        {
            int q1=q( ca|(1<<i), cb|(1<<i));
            if(q1==-1)
            {
                ca|=(1<<i);
                agb=q(ca,cb);
            }
            else
            {
                int q2=q( ca|(1<<i),cb);
                if(q2==-1)
                {
                    ca|=(1<<i);
                    cb|=(1<<i);
                }
            }
        }
        else if(agb==0)
        {
            int q2=q( ca|(1<<i),cb);
            if(q2==-1)
            {
                ca|=(1<<i);
                cb|=(1<<i);
            }
        }
        else if(agb<0)
        {
            int q1=q( ca|(1<<i), cb|(1<<i));
            if(q1==1)
            {
                cb|=(1<<i);
                agb=q(ca,cb);
            }
            else
            {
                int q2=q( ca|(1<<i),cb);
                if(q2==-1)
                {
                    ca|=(1<<i);
                    cb|=(1<<i);
                }
            }
        }
    }
    p(ca,cb);
}














