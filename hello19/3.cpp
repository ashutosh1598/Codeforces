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

const int maxn=5e5+5;

int lef[maxn],rig[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int perf=0;
    for(int i=0;i<n;++i)
    {
        string x;
        cin>>x;
        int sum=0;
        int l=0,r=0;

        for(int j=0;j<x.length();++j)
        {
            if(x[j]=='(')
            {
                sum++;
            }
            if(x[j]==')')
            {
                sum--;
                if(sum<0)
                {
                    r=1;
                }
            }
        }
        sum=0;
        for(int j=x.length()-1;j>=0;--j)
        {
            if(x[j]=='(')
            {
                sum++;
                if(sum>0)
                {
                    l=1;
                }
            }
            else
            {
                sum--;
            }
        }
        if(l==1&&r==1)
            continue;
        else if(l==0&&r==0)
        {
            perf++;
        }
        else if(l==1)
        {
            lef[sum]++;
        }
        else if(r==1)
        {
            rig[sum*(-1)]++;
        }
    }
    int ans=(perf/2);
    for(int i=1;i<maxn;++i)
    {
        ans+=min(lef[i],rig[i]);
    }
    cout<<ans<<'\n';
}





