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
    int n;
    cin>>n;
    vector<int>r(n+1,0),mp(n+1,0),smp(n+1,0);
    int ma=-1,sma=-1;
    for(int i=1;i<=n;++i)
    {
        cin>>r[i];
        if(r[i]>ma)
        {
            sma=ma;
            ma=r[i];
        }
        else if(r[i]>sma)
        {
            sma=r[i];
        }
        mp[i]=ma;
        smp[i]=sma;
    }
    /*
    stack<int>st;
    vector<int>near(n+1,-1);
    vector<int>howm(n+1,0);
    for(int i=1;i<=n;++i)
    {
        while(!st.empty()&&st.top()<r[i])
        {
            st.pop();
        }
        if(st.empty())
        {
            near[i]=-1;
        }
        else near[i]=st.top();
        st.push(r[i]);
    }
    for(int i=1;i<=n;++i)
    {
        if(near[i]!=-1)
            howm[near[i]]++;
    }
    */
    vector<int>tpos(n+1,0);
    for(int i=1;i<=n;++i)
    {
        //cout<<mp[i]<<' '<<smp[i]<<' '<<r[i]<<" mp smp\n";
        if(mp[i]==r[i])
        {
            tpos[i]=1;
        }
    }
    int elp=-1;ma=-1;
    int i=1;
    while(i<=n)
    {
        int co=0;int pos=i;
        ++i;
        while(i<=n&&tpos[i]==0)
        {
            if(smp[i]==r[i]&&mp[i]==r[pos])
            {
                co++;
            }
            ++i;
        }
        if(co>ma)
        {
            ma=co;
            elp=pos;
        }
        if(co==ma)
        {
            if(r[pos]<r[elp])
            {
                ma=co;
                elp=pos;
            }
        }
    }
    cout<<r[elp]<<'\n';
}








