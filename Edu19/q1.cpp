#include"iostream"
#include"cmath"
#include"vector"
#include"algorithm"
using namespace std;
typedef long long ll;
int main()
{
    ll n,k;cin>>n>>k;
    ll t=n;ll div=2;vector<ll>fac;
    if(k==1)
    {
        cout<<n<<endl;
        return 0;
    }
    while(t!=1)
    {
        if(t%div==0)
        {
            fac.push_back(div);k--;
            t/=div;
        }
        else div++;
        if(k==1)
        {
            if(t<=1)
            {
                cout<<-1<<endl;return 0;
            }
            for(int i=0;i<fac.size();i++)
            {
                cout<<fac[i]<<" ";
            }
            cout<<t<<endl;
            return 0;
        }

    }
    cout<<-1<<endl;
}
