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

vector<int>ma(26,-1);
vector<int>aloc(26,-1);
set<int>una;
int k;

void pr()
{
    cout<<"YES\n";
    for(int i=0;i<k;++i)
    {
        if(aloc[i]!=-1)una.erase(i);
    }
    for(int i=0;i<k;++i)
    {
        if(ma[i]==-1)
        {
            int yyy=*(una.begin());
            ma[i]=yyy;
            una.erase(una.begin());
        }
        cout<< (char)('a'+ma[i]);
    }
    cout<<'\n';
}
int tem(int si,int ai)
{
    if(ma[si]!=-1&&ma[si]!=ai)return false;
    if(ma[si]==ai)return true;
    if(aloc[ai]==1)return false;
    ma[si]=ai;
    aloc[ai]=1;
    return true;
}
void solve()
{
    for(int i=0;i<26;++i)
    {
        ma[i]=aloc[i]=-1;
    }
    string s,a,b;
    cin>>k>>s>>a>>b;
    int n=s.length();
    una.clear();
    for(int i=0;i<k;++i)
    {
        una.insert(i);
    }
    int i=0;
    for(i=0;i<n&&a[i]==b[i];++i)
    {
        int si=s[i]-'a',ai=a[i]-'a';
        if(!tem(si,ai))
        {
            cout<<"NO\n";
            return;
        }
    }
    if(i==n)
    {
        pr();
        return;
    }
    int si=s[i]-'a',ai=a[i]-'a',bi=b[i]-'a';
    for(int ch=ai+1;ch<bi;++ch)
    {
        if(tem(si,ch))
        {
            pr();
            return;
        }
    }
    vector<int>oldaloc(26),oldma(26);int oldi=i;
    for(int i=0;i<26;++i)
    {
        oldaloc[i]=aloc[i];
        oldma[i]=ma[i];
    }
    int noa=0;
    if(tem(si,ai))
    {
        i++;
        for(;i<n;++i)
        {
            ai=a[i]-'a';
            si=s[i]-'a';
            int ch=a[i]-'a';
            for(ch=ch+1;ch<k;++ch)
            {
                if(tem(si,ch))
                {
                    pr();
                    return;
                }
            }
            if(!tem(si,ai))
            {
                noa=1;
                break;
            }
        }
        if(!noa)
        {
            pr();
            return;
        }
    }
    i=oldi;
    for(int i=0;i<26;++i)
    {
        aloc[i]=oldaloc[i];
        ma[i]=oldma[i];
    }
    si=s[i]-'a';
    bi=b[i]-'a';
    noa=0;
    if(tem(si,bi))
    {
        i++;
        for(;i<n;++i)
        {
            bi=b[i]-'a';
            si=s[i]-'a';
            int ch=b[i]-'a';
            for(ch=ch-1;ch>=0;--ch)
            {
                if(tem(si,ch))
                {
                    pr();
                    return;
                }
            }
            if(!tem(si,bi))
            {
                cout<<"NO\n";
                return;
            }
        }
        pr();
        return;
    }
    cout<<"NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
}
