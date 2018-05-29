#include"iostream"
#include"string"
#include"cmath"
using namespace std;
int main()
{
	int n,k;string a;
	cin>>n>>k>>a;
	int gpos=0,tpos=0;
	gpos=a.find('G');
	tpos=a.find('T');
	int diff=abs(gpos-tpos);
	if(diff%k!=0)
	{
		cout<<"NO";return 0;
	}
	if(gpos>tpos)
	{
		gpos=gpos+tpos;
		tpos=gpos-tpos;
		gpos=gpos-tpos;
	}
	gpos+=k;
	while(1)
	{
		if(gpos==tpos)
		{
			cout<<"YES";return 0;
		}
		if(a[gpos]=='#')
		{
			cout<<"NO";return 0;
		}
		gpos+=k;
	}
}
