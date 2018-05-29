#include"iostream"
#include"cmath"
#include"vector"
#include"algorithm"
#include"list"
#include"set"
#include"unordered_set"
#include"map"
#include"unordered_map"
#include"string"
#include"cstring"
#include"iomanip"
using namespace std;
typedef long long ll;
int a[150],b[150];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    for(int i=0;i<k;++i)
        cin>>b[i];
    sort(b,b+k,greater<int>());
    int j=0;
    for(int i=0;i<n;++i)
    {
        if(a[i]==0)
        {
            a[i]=b[j++];
        }
    }
    for(int i=1;i<n;++i)
    {
        if(a[i-1]>a[i])
        {
            cout<<"Yes\n";
            return 0;
        }
    }
    cout<<"No\n";
}
