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
#include"unordered_set"
#include"map"
#include"unordered_map"
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
const int maxn=1010;
int a[maxn],b[maxn],pare[maxn];
int find(int x)
{
    return x==pare[x]?x:pare[x]=find(pare[x]);
}
void merge(int x,int y)
{
    pare[find(x)]=find(y);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n-1;++i)
    {
        cin>>a[i]>>b[i];
        --a[i];
        --b[i];
    }
    for(int i=0;i<n;++i)
        pare[i]=i;
    list<int>posn;
    for(int i=0;i<n-1;++i)
    {
        if(find(a[i])!=find(b[i]))
            merge(a[i],b[i]);
        else posn.push_back(i);
    }
    cout<<posn.size()<<'\n';
    auto it=posn.begin();
    for(int i=1;i<n;++i)
    {
        if(find(i)!=find(0))
        {
            cout<<a[*it]+1<<' '<<b[*it]+1<<' '<<1<<' '<<i+1<<'\n';
            ++it;
            merge(0,i);
        }
    }
}











