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
const int maxn=1500+5;
int count(vector<int>&rec,vector<int>&temp,int l,int h)
{
    if(h-l<1)
        return 0;
    int m=(l+h)/2;
    int ans=count(rec,temp,l,m)+count(rec,temp,m+1,h);
    int a=l,b=m+1;
    int i=l;
    for(i=l;i<h;++i)
    {
        if(a>m||b>h)
            break;
        if(temp[a]>temp[b])
        {
            ans+=m-a+1;
            rec[i]=temp[b];
            ++b;
        }
        else
        {
            rec[i]=temp[a];
            ++a;
        }
    }
    while(a<=m)
    {
        rec[i++]=temp[a++];
    }
    while(b<=h)
    {
        rec[i++]=temp[b++];
    }
    for(int i=l;i<=h;++i)
    {
        temp[i]=rec[i];
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>pr(n),tem(n);
    for(int i=0;i<n;++i)
    {
        cin>>pr[i];
        tem[i]=pr[i];
    }
    int toi=count(pr,tem,0,n-1);
    toi%=2;
    int m;
    cin>>m;
    while(m--)
    {
        int l,r;
        cin>>l>>r;
        int le=r-l+1;
        int res=le*(le-1)/2;
        toi+=res;
        toi%=2;
        if(toi==0)cout<<"even\n";
        else cout<<"odd\n";
    }
}















