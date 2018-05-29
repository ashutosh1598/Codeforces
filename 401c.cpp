#include"iostream"
#include"cmath"
#include"algorithm"
#include"string"
#include"iomanip"
#include"bitset"
typedef long long ll;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;cin>>n>>m;
    bool a=m>=n-1&&m<=2*n+2;
    if(!a)
    {
        printf("-1\n");
        return 0;
    }
    const ll maxn=3e6+100;
    bitset<maxn>x;
    m-=n-1;
    int in=0;
    if(m>0)
    {
        int c=0;
        while(m>0&&c++<2)
        {
            x.set(in++);
            --m;
        }
    }
    for(int i=0;i<n-1;++i)
    {
        ++in;x[in++]=1;
        if(m>0)
        {
            x[in++]=1;
            --m;
        }
    }
    x[in++]=0;
    while(m--)
    {
        x[in++]=1;
        
    }
    for(int i=0;i<in;++i)
        cout<<x[i];
    cout<<'\n';
}
