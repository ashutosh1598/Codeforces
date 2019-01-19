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
ll white,black;
struct rect
{
    ll x1,y1,x2,y2;
    ll col;
    rect(ll a,ll b,ll c,ll d)
    {
        x1=a,y1=b,x2=c,y2=d;
    }
    rect(ll a,ll b,ll c,ll d,ll cc)
    {
        x1=a,y1=b,x2=c,y2=d,col=cc;
    }
    void print()
    {
        cout<<"rectangle "<<x1<<' '<<y1<<' '<<x2<<' '<<y2<<' '<<col<<'\n';
    }
};
void solve(list<rect>&pp)
{
    for(auto r:pp)
    {
//        r.print();
        ll wid=r.x2-r.x1+1,he=r.y2-r.y1+1;
        if(wid<=0||he<=0)continue;
        ll wh=-1,bl=-1;
        if(wid%2==0||he%2==0)
        {
            wh=(wid*he)/2;
            bl=wh;
        }
        else
        {
            if( (r.x1+r.y1)%2==0)
            {
                wh=(wid*he+1)/2;
                bl=(wid*he)/2;
            }
            else
            {
                wh=(wid*he)/2;
                bl=(wid*he+1)/2;
            }
        }
        if(r.col==1)
        {
            white=white-wh+wid*he;
            black=black-bl;
        }
        else
        {
            white=white-wh;
            black=black-bl+wid*he;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,x1,y1,x2,y2,x3,y3,x4,y4;
        cin>>n>>m>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        auto r11=mp(mp(x1,y1),mp(x2,y2)),r22=mp(mp(x3,y3),mp(x4,y4));
        rect r1=rect(x1,y1,x2,y2,1),r2=rect(x3,y3,x4,y4,-1);
       // if(r11>r22)swap(r1,r2);
        white = (n*m+1)/2;
        black=(n*m)/2;
        list<rect> pp;
        if(r2.x1<r1.x1)
        {
            if(r2.x2<r1.x1)
            {
                pp.pb(r1);pp.pb(r2);solve(pp);
                cout<<white<<' '<<black<<'\n';
                continue;
            }
            pp.pb(rect(r2.x1,r2.y1,r1.x1-1,r2.y2,-1));
            r2.x1=r1.x1;
        }
        if(r2.x1>r1.x2)
        {
            pp.pb(r1);
            pp.pb(r2);
        }
        else
        {
            if(r2.y1<r1.y1&&r2.y2<r1.y1)
            {
                pp.pb(r1);
                pp.pb(r2);
            }
            else if(r2.y1<r1.y1&&r2.y2<=r1.y2)
            {
                if(r2.x2<r1.x2)
                {
                    pp.pb(rect(r1.x1,r1.y1,r2.x1-1,r1.y2,1));
                    pp.pb(rect(r2.x1,r2.y2+1,r1.x2,r1.y2,1));
                    pp.pb(rect(r2.x2+1,r1.y1,r1.x2,r2.y2,1));
                    pp.pb(r2);
                }
                else
                {
                    pp.pb(rect(r1.x1,r1.y1,r2.x1-1,r1.y2,1));
                    pp.pb(rect(r2.x1,r2.y2+1,r1.x2,r1.y2,1));
                    pp.pb(r2);
                }
            }
            else if(r2.y1<r1.y1&&r2.y2>r1.y2)
            {
                pp.pb(rect(r1.x1,r1.y1,r2.x1-1,r1.y2,1));
                pp.pb(r2);
                if(r2.x2<r1.x2)
                    pp.pb(rect(r2.x2+1,r1.y1,r1.x2,r1.y2,1));
            }
            else if(r2.y1>=r1.y1&&r2.y2<=r1.y2)
            {
                pp.pb(rect(r1.x1,r1.y1,r2.x1-1,r1.y2,1));
                pp.pb(rect(r2.x1,r1.y1,r1.x2,r2.y1-1,1));
                pp.pb(rect(r2.x1,r2.y2+1,r1.x2,r1.y2,1));
                pp.pb(r2);
                if(r2.x2<r1.x2)
                {
                    pp.pb(rect(r2.x2+1,r2.y1,r1.x2,r2.y2,1));
                }
            }
            else if(r2.y1>=r1.y1&&r2.y2>r1.y2)
            {
                pp.pb(rect(r1.x1,r1.y1,r2.x1-1,r1.y2,1));
                pp.pb(rect(r2.x1,r1.y1,r1.x2,r2.y1-1,1));
                pp.pb(r2);
                if(r2.x2<r1.x2)
                {
                    pp.pb(rect(r2.x2+1,r2.y1,r1.x2,r1.y2,1));
                }
            }
            else if(r2.y1>r1.y2)
            {
                pp.pb(r1);
                pp.pb(r2);
            }
            else
            {
                assert(0);
            }
        }
        solve(pp);
        cout<<white<<' '<<black<<'\n';
    }
}








