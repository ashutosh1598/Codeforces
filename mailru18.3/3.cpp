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

const int maxn= 2e3+10;
ll n,m,t;
ll part[maxn];
ll power[maxn];

struct edge
{
    ll a,b;
    edge(ll c,ll d)
    {
        a=c;
        b=d;
    }
    bool operator<(const edge & ob)const
    {
        return power[a]<power[ob.a]||(power[a]==power[ob.a]&&power[b]<power[ob.b]);
    }
};
vector<edge>ed;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=1;i<=2*n;++i)
    {
        cin>>power[i];
    }
    for(int i=0;i<m;++i)
    {
        ll a,b;
        cin>>a>>b;
        if(power[a]<power[b])
        {
            swap(a,b);
        }
        part[a]=b;
        part[b]=a;
        ed.pb(edge(a,b));
    }
    sort(all(ed));
    cin>>t;
    if(t==1)
    {
        for(int i=m-1;i>=0;--i)
        {
            cout<<ed[i].a<<endl;
            ll x;
            cin>>x;
            if(x==-1)return 0;
        }
        if(m==n)return 0;
        vector<pll> my;
        for(int i=1;i<=2*n;++i)
        {
            if(!part[i])
            {
                my.pb(mp(power[i],i));
            }
        }
        sort(all(my));
        vector<ll>pos(2*n+5);
        vector<ll>mark(2*n+5,0);
        for(int i=0;i<my.size();++i)
        {
            pll xx=my[i];
            pos[xx.ss]=i;
        }
        ll ind=my.size()-1;
        while(1)
        {
            if(ind<0)return 0;
            ll hero=my[ind].ss;
            if(mark[hero])
            {
                ind--;
                if(ind<0)return 0;
                continue;
            }
            cout<<hero<<endl;
            ll cpu;
            cin>>cpu;
            if(cpu==-1)return 0;
            mark[cpu]=1;
            ind--;
            if(ind<0)return 0;
        }
    }

    //t=2;
    if(t==2)
    {
        vector<ll>mark(2*n+5,0);
        vector<pll> my;
        for(int i=0;i<=2*n-1;++i)
        {
            my.pb(mp(power[i+1],i+1));
        }
        int edind=m-1;
        sort(all(my));
        int ind=2*n-1;
        int moves=0;
        while(1)
        {
            if(moves==n)return 0;
            ll cpu;
            cin>>cpu;
            moves++;
            if(cpu==-1)return 0;
            mark[cpu]=1;
            if(part[cpu]>0&&mark[part[cpu]]==0)
            {
                cout<<part[cpu]<<endl;
                mark[part[cpu]]=1;
                continue;
            }
            int printed=0;
            while(edind>=0)
            {
                if(mark[ed[edind].a])
                {
                    edind--;
                    continue;
                }
                cout<<ed[edind].a<<endl;
                mark[ed[edind].a]=1;
                edind--;
                printed=1;
                break;
            }
            if(printed)continue;
            while(ind>=0)
            {
                if(mark[my[ind].ss])
                {
                    ind--;
                    continue;
                }
                cout<<my[ind].ss<<endl;
                printed=1;
                mark[my[ind].ss]=1;
                ind--;
                if(ind<0)return 0;
                break;
            }

        }

    }
}
