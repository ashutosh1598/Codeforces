#include"iostream"
#include"cmath"
#include"string"
#include"vector"
#include"algorithm"
using namespace std;
typedef long long ll;
typedef long double doubl;
vector<ll> gcd(ll a,ll b)
{
    if(b==0)
    {
        vector<ll>temp(3);
        temp[0]=a;temp[1]=1;temp[2]=0;
        return temp;
    }
    else
    {
        vector<ll>ans=gcd(b,a%b);
        vector<ll>temp(3);
        temp[0]=ans[0];
        temp[1]=ans[2];
        temp[2]=ans[1]-(a/b)*ans[2];
        return temp;
    }
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll x,y,p,q;cin>>x>>y>>p>>q;
        ll right=p*y-x*q;
        if(p==q)
        {
            if(x==y)
            {
                cout<<0<<endl;continue;
            }
            else
            {
                cout<<-1<<endl;continue;
            }
        }
        if(p==0)
        {
            if(x>0)
            {
                cout<<-1<<endl;continue;
            }
            else
            {
                cout<<0<<endl;continue;
            }
        }
        vector<ll>temp=gcd(q,p); 
        if(temp[0]!=1)
        {
            cout<<-1<<endl;
            continue;
        }
        temp[1]*=right;
        temp[2]*=right;
        ll a=temp[1],b=-temp[2];
        if(0<=a&&a<=b)
        {
            while(a>=0&&b>=a)
            {
                a-=p;b-=q;
            }
            a+=p;b+=q;
            cout<<b<<endl;
            continue;
        }
        if(a>b)
        {
            //ll k=ceil(doubl(a-b)/doubl(q-p));
            ll k=(a-b)/(q-p);
            cout<<k*q+b<<endl;
            continue;
        }
        if(a<0)
        {
            ll k=ceil(doubl(-a)/doubl(p));
            b+=k*q;a+=k*p;
            cout<<b<<endl;
        }
    }
}
