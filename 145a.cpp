#include"iostream"
#include"cmath"
#include"vector"
#include"algorithm"
#include"set"
#include"map"
#include"string"
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string x,y;cin>>x>>y;
    int len=x.length();
    int sum1=0,sum2=0;
    for(int i=0;i<len;++i)
    {
        if(x[i]!=y[i])
        {
            if(x[i]=='4')
                ++sum1;
            else ++sum2;
        }
    }
    cout<<max(sum1,sum2)<<'\n';
}
