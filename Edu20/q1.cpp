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
    int n,k;cin>>n>>k;
    if(n*n<k)
    {
        cout<<-1<<endl;
        return 0;
    }
    int ans[n][n];
    for(int i=0;i<n;++i)
        for(int j=0;j<n;++j)
            ans[i][j]=0;
    for(int i=0;i<2*n-1;i++)
    {
        if(k==0)
            break;
        if(k>=min(i+1,2*n-1-i))
        {
            for(int j=0;j<=i;j++)
            {
                ans[j][i-j]=1;k--;
            }
        }
        else
        {
        if(k%2==1&&i%2==1)
        {
            continue;
        }
        /*
        if(k%2==0&&i%2==0)
        {
            continue;
        }
        */
        for(int j=0;j<=i;j++)
        {
            if(k==0)
                break;
            if(k%2==1)
            {
                ans[i][i]=1;k--;
            }
            ans[j][i-j]=1;ans[i-j][i]=1;
            if(2*j==i)
            {
                ;
            }
            else k-=2;
        }
        }
    }
    if(k!=0)
    {
        cout<<-1<<endl;return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }
}
