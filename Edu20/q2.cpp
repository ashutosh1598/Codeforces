#include"iostream"
#include"cmath"
#include"vector"
#include"algorithm"
#include"set"
#include"map"
using namespace std;
typedef long long ll;
int main()
{
    int n;cin>>n;
    vector<int> arr(n,0);
    vector<int> left(n);
    vector<int> right(n);
    for(int i=0;i<n;i++)
    {
        ll x;cin>>x;
        if(x!=0)
            arr[i]=1;
    }
    ll curr=1e6;
    for(int i=0;i<n;++i)
    {
        if(arr[i]!=0)
        {
            left[i]=curr;
            curr++;
        }
        else
        {
            left[i]=0;
            curr=1;
        }
    }
    curr=1e6;
    for(int i=n-1;i>=0;--i)
    {
        if(arr[i]!=0)
        {
            right[i]=curr;
            curr++;
        }
        else
        {
            right[i]=0;
            curr=1;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<min(left[i],right[i])<<" ";
    }
    cout<<endl;
}
