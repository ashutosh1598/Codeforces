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
const int maxn=1e5+5;
int a[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int h;
    cin>>h;
    int sum=0;
    int ok=0;
    int pos=-1;
    for(int i=0;i<=h;++i)
    {
        cin>>a[i];
        sum+=a[i];
        if(i>0&&a[i]>1&&a[i-1]>1)
        {
            ok=1;
            pos=i;
        }
    }
    if(ok==0)
    {
        cout<<"perfect\n";
        return 0;
    }
    cout<<"ambiguous\n";
    int cu=1;
    for(int i=0;i<=h;++i)
    {
        if(i==0)
        {
            cout<<0<<' ';
            cu++;
            continue;
        }
        int lu=cu-1;
        for(int j=0;j<a[i];++j)
        {
            cout<<lu<<' ';
            cu++;
        }
    }
    cout<<'\n';
    cu=1;
    for(int i=0;i<=h;++i)
    {
        if(i==0)
        {
            cout<<0<<' ';
            cu++;
            continue;
        }
        int lu=cu-1;
        for(int j=0;j<a[i];++j)
        {
            if(i==pos&&j==0)
                cout<<lu-1<<' ';
            else
                cout<<lu<<' ';
            cu++;
        }
    }
    cout<<'\n';
}











