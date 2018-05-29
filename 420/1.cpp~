#include"iostream"
#include"cmath"
#include"vector"
#include"algorithm"
#include"list"
#include"set"
#include"map"
#include"string"
#include"cstring"
#include"iomanip"
using namespace std;
typedef long long ll;
int a[51][51];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    for(int i=0;i<n;++i)
    	for(int j=0;j<n;++j)
    		cin>>a[i][j];
    bool a1=true;
    for(int i=0;i<n;++i)
    {
    	for(int j=0;j<n;++j)
    	{
    		if(a[i][j]==1)
    			continue;
    		bool kk=false;
    		int x=a[i][j];
    		for(int i1=0;i1<n;++i1)
    		{
    			for(int j1=0;j1<n;++j1)
    			{
    				if(a[i][j1]+a[i1][j]==x)
    				{
    					kk=true;
    				}
    			}
    		}
    		if(!kk)
    		{
    			a1=false;break;
    		}
    	}
    }
    if(a1)
    	cout<<"Yes\n";
    else cout<<"No\n";
}
