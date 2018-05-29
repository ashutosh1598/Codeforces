#include"iostream"
#include"cmath"
#include"string"
#include"vector"
#include"algorithm"
using namespace std;
typedef long long ll;
int main()
{
	vector<string>names(50,"");
	for(int i=0;i<26;i++)
	{
		names[i]="A";
		names[i].push_back(i+97);
	}
	for(int i=26;i<50;i++)
	{
		names[i]="B";
		names[i].push_back(i-26+97);
	}
	ll k,n;cin>>k>>n;
	vector<bool> dec(n,false);
	for(ll i=0;i<n-k+1;i++)
	{
		string x;cin>>x;
		if(x=="YES")
	}
}
