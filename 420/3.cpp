#include"iostream"
#include"cmath"
#include"vector"
#include"algorithm"
#include"list"
#include"set"
#include"stack"
#include"map"
#include"string"
#include"cstring"
#include"iomanip"
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    stack<int>st;
    int hr=1;
    int ans=0;
    for(int i=0;i<2*n;++i)
    {
    	string x;int y;
    	cin>>x;
    	if(x[0]=='a')
    	{
    		cin>>y;
    		st.push(y);
    	}
    	if(x[0]=='r')
    	{
    		if(st.empty())
    		{
    			hr++;
    		}
    		else
    		{
    			int y1=st.top();
    			if(y1==hr)
    			{
    				st.pop();
    			}
    			else
    			{
    				ans++;
    				while(!st.empty())
    					st.pop();
    			}
    			hr++;
    		}
    	}
    }
    cout<<ans<<'\n';
}








