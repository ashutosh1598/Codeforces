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
    int k1,k2,k3;
    cin>>k1>>k2>>k3;
    vector<int>r(3);
    r[0]=k1;r[1]=k2;r[2]=k3;
    if(k1==1||k2==1||k3==1)
    {
        cout<<"YES\n";
        return 0;
    }
    int c2=0,c3=0;
    for(int i=0;i<3;++i)
    {
        if(r[i]==2)c2++;
        if(r[i]==3)c3++;
    }
    if(c2>=2||c3==3)
    {
        cout<<"YES\n";
        return 0;
    }
    sort(all(r));
    if(r[0]==2&&r[1]==4&&r[2]==4)
    {
        cout<<"YES\n";
        return 0;
    }

    cout<<"NO\n";
}















