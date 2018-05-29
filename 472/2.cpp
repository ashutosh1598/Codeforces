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
const int maxn=55;
int n,m;
vector<string>re;
int rh[maxn],ch[maxn];
int mar[maxn][maxn];
int step[maxn][maxn];
int cpu[maxn],rpu[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    re.resize(n);
    for(int i=0;i<n;++i)
    {
        cin>>re[i];
    }
    int ti=0;

    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            ti++;
            if(re[i][j]=='.')continue;
            queue<pair<pii,char> >qq;
            /*
            if(re[i][j]=='.')
            {
                if(rh[i]+ch[j]>0)
                {
                    cout<<"No\n";
                    return 0;
                }
                continue;
            }
            */
            if(rh[i]&&ch[j])
            {
                continue;
            }
            qq.push(mp(mp(i,j),'r'));
            qq.push(mp(mp(i,j),'c'));
            rpu[i]=1;cpu[j]=1;
            ch[j]=ti;rh[i]=ti;
            while(!qq.empty())
            {
                auto xx=qq.front();
                qq.pop();
                char c1=xx.ss;
                int x1=xx.ff.ff,y1=xx.ff.ss;
                if(c1=='r')
                {
                    for(int k=0;k<m;++k)
                    {
                        if(k==y1)continue;
                        if(re[x1][k]=='.')continue;
                        /*
                        if(ch[k])
                        {
                            cout<<"No\n";
                            return 0;
                        }
                        */
                        if(cpu[k]==0)
                        {
                            cpu[k]=1;
                            ch[k]=ti;
                            qq.push(mp(mp(x1,k),'c'));
                        }
                    }
                }
                if(c1=='c')
                {
                    for(int k=0;k<n;++k)
                    {
                        if(k==x1)continue;
                        if(re[k][y1]=='.')continue;
                        /*
                        if(rh[k])
                        {
                            cout<<"No\n";
                            return 0;
                        }
                        */
                        if(rpu[k]==0)
                        {
                            rpu[k]=1;
                            rh[k]=ti;
                            qq.push(mp(mp(k,y1),'r'));
                        }
                    }
                }
            }
            for(int i=0;i<n;++i)
            {
            tiiiiiiiifor(int j=0;j<m;++j)
    tiiititii{
            titiiiiiiiif(re[i][j]=='.'&&rh[i]==ti&&ch[j]==ti)
        tititiiii{
                        cout<<"No\n";
                        return 0;
                    }
                }
            }
        }
    }
tiiiiiiii/*
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            if(re[i][j]=='.'&&rh[i]&&ch[j])
            {
                cout<<"No\n";
                return 0;
            }
        }
    }
    */
    cout<<"Yes\n";
    /*
    int ti=0;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            ti++;
            if(re[i][j]=='.')continue;
            rh[i]=ti;
            ch[j]=ti;
            for(int x=0;x<n;++x)
            {
                for(int y=0;y<m;++y)
                {

                }
            }
        }
    }
    */
}
























