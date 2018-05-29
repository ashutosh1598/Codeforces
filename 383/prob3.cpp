#include"iostream"
#include"cmath"
using namespace std;
typedef long long ll;
ll gcd(int m,int n)
{
	if(n==0)return m;
	else return gcd(n,m%n);
}
ll lcm(int a,int b)
{
	return 1LL*a*b/gcd(a,b);
}
ll lcm_array(int a[],int i,int l)
{
	if(l-i==1)
	return lcm(a[i],a[l]);
	return lcm(a[i],lcm_array(a,i+1,l));
}
int main()
{
	int n;cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int b[n+1];
	int t=0,tmaxeven=0,tmaxodd=0;
	for(int i=1;i<=n;i++)
	{
		int k=i;
		t=0;
		while(1)
		{
			k=a[k];
			t++;
			if(t>n)
			{
				cout<<-1;
				return 0;
			}
			if(k==i)
			{
				if(t%2==0)
				b[i]=t/2;
				else b[i]=t;		
				break;
			}
		}
	
	}
	cout<<lcm_array(b,1,n);
	return 0;
}
