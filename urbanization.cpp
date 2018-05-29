#include"iostream"
#include"vector"
#include"algorithm"
#include"cmath"
using namespace std;
int main()
{
	int n;int n1,n2;
	cin>>n>>n1>>n2;
	vector<int>a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	 long long sum1=0,sum2=0;
	 int t=n1;
	n1=min(n1,n2);
	if(n1!=t)
		n2=t;
	int i=n-n1-n2;


	for(;i<n-n1;i++)
	{
		sum1+=a[i];
	}
	for(i=n-n1;i<n;i++)
	{
		sum2+=a[i];
	}
	cout<<sum1/(double)n2+sum2/(double)n1;
	return 0;

}
