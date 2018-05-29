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
    int n,m,c;
    vector<int>r(n,0);
    cin>>n>>m>>c;
    while(m--)
    {
        int p;cin>>p;
        if(p<=c/2)//jdsssskfj
        {
            for(int i=0;i<n;++i)
            {
                if(r[i]==0||r[i]>p)
                {
                    r[i]=p;
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
        else 
        {
            for(int i=n-1;i>=0;--i)
            {
                if(r[i]==0||r[i]<p)
                {
                    r[i]=p;
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
        int ok=1;
        for(int i=0;i<n;++i)
        {
            if(r[i]==0)
            {
                ok=0;
                break;
            }
        }
        if(ok)exit(0);
    }
}
