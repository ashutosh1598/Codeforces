#include"iostream"
using namespace std;
int main()
{
	int n,x;cin>>n>>x;
	unsigned int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int t=0;
	for(int i=0;i<n-1;i++)
	{	for(int j=i+1;j<n;j++)
		{	
			int k=a[i]^a[j];
			if(k==x)
			{
				t++;
				
			}	
		}
	}
	cout<<t;		
}
