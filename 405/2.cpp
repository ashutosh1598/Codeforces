#include"iostream"
#include"set"
#include"cmath"
#include"string"
#include"vector"
#include"algorithm"
using namespace std;
typedef long long ll;
int main()
{
	ll n,m;
	cin>>n>>m;
	vector<bool> temp(n,false);
	vector<vector<bool> >friend(n,a);
	vector<vector<int> > adj(n);
	for(int i=0;i<m;i++)
	{
		ll a,b;
		cin>>a>>b;
		adj[a-1].push_back(b-1);
		adj[b-1].push_back(a-1);
		friend[a-1][b-1]=true;
		friend[b-1][a-1]=true;
	}
	vector<bool>mark(n,false);
	bool deci=mbfs(adj,mark);

}
