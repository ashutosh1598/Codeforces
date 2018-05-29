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
    int x,sum=0;
    int t=5;
    while(t--)
    {
        cin>>x;sum+=x;
    }
    if(sum%5==0&sum!=0)
        cout<<sum/5<<'\n';
    else cout<<"-1\n";
}
