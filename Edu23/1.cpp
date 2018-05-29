#include"iostream"
#include"cmath"
#include"vector"
#include"algorithm"
#include"cstring"
#include"iomanip"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x1,y1,x,y;
    cin>>x1>>y1>>x>>y;x-=x1;y-=y1;
    x=abs(x);y=abs(y);
    int a,b;cin>>a>>b;
    if(x%a!=0||y%b!=0)
    {
        cout<<"NO\n";
        return 0;
    }
    else
    {
        x1=x/a;
        y1=y/b;
        x1%=2;y1%=2;
        if(x1==y1)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
}







