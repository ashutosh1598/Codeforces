#include"iostream"
#include"cmath"
#include"string"
#include"vector"
#include"algorithm"
using namespace std;
typedef long long ll;
int main()
{
	ll a,b;cin>>a>>b;
	for(int i=1;;i++)
	{
		a*=3;b*=2;
		if(a>b)
		{
			cout<<i<<endl;
			break;
		}
	}
}
