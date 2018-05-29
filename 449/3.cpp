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
const int maxn=1e5+10;
const ll INF=2e18;
ll len[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string xo="What are you doing at the end of the world? Are you busy? Will you save us?";    //     75 
                                                                                                //     34 32 2        
    string fir="What are you doing while sending \"";
    string sec="\"? Are you busy? Will you send \"";
    string thir="\"?";
    int a0=xo.length(),a1=fir.length(),a2=sec.length(),a3=thir.length();
    //printf("%d %d %d %d\n",a0,a1,a2,a3);
    len[0]=75;
    for(ll i=1;i<maxn;++i)
    {
        if(  len[i-1]>(INF-68)/2)
        {
            len[i]=INF;
        }
        else len[i]=68+2*len[i-1];
    }
    int q;
    cin>>q;
    while(q--)
    {
        ll n,k;
        cin>>n>>k;
        while(1)
        {
            if(len[n]<k)
            {
                cout<<'.';
                break;
            }
            if(n==0)
            {
                cout<<xo[k-1];
                break;
            }
            if(k<=34)
            {
                cout<<fir[k-1];
                break;
            }
            if(k<=34+len[n-1])
            {
                n--;
                k-=34;
                continue;
            }
            if(k<=34+len[n-1]+32)
            {
                cout<<sec[k-34-len[n-1]-1];
                break;
            }
            if(k<=34+len[n-1]+32+len[n-1])
            {
                k-=34+len[n-1]+32;
                n--;
                continue;
            }
            int in=k-(34+len[n-1]+32+len[n-1]);
            cout<<thir[ k-(34+len[n-1]+32+len[n-1]) -1];
            break;
        }
    }
}
