#include"iostream"
using namespace std;
int main()
{
	long long n;
	cin>>n;
	
	int k=n%4;
	if(n==0)cout<<1;
	else if(k==0)cout<<6;
	else if(k==1)cout<<8;
	else if(k==2)cout<<4;
	else cout<<2;
}
