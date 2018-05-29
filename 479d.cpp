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
using namespace std;
typedef long long ll;
typedef long double ld;
ll n,l,x,y;
vector<ll>rec;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>l>>x>>y;
    rec.resize(n);
    for(int i=0;i<n;++i)
    {
        cin>>rec[i];
    }
    bool x1=0,y1=0;
    for(int i=0;i<n;++i)
    {
        int p=rec[i];
        int pos=lower_bound(rec.begin(),rec.end(),p+x)-rec.begin();
        if(pos<n&&rec[pos]==p+x)
            x1=1;
        pos=lower_bound(rec.begin(),rec.end(),p+y)-rec.begin();
        if(pos<n&&rec[pos]==p+y)
            y1=1;
        if(x1&&y1)
        {
            cout<<"0\n";
            return 0;
        }
    }
    if(x1)
    {
        cout<<"1\n"<<y<<'\n';
        return 0;
    }
    if(y1)
    {
        cout<<"1\n"<<x<<'\n';
        return 0;
    }
    for(int i=0;i<n;++i)
    {
        int p=rec[i];
        for(int k=-1;k<=1;k+=2)
        {
            if(p+k*x>=0&&p+k*x<=l&&binary_search(rec.begin(),rec.end(),p+k*x+y))
            {
                cout<<"1\n"<<p+k*x<<'\n';
                return 0;
            }
            if(p+k*x>=0&&p+k*x<=l&&binary_search(rec.begin(),rec.end(),p+k*x-y))
            {
                cout<<"1\n"<<p+k*x<<'\n';
                return 0;
            }
        }
    }
    cout<<"2\n"<<x<<' '<<y<<'\n';
}

































