#include"iostream"
#include"cmath"
#include"vector"
#include"algorithm"
#include"list"
#include"set"
#include"unordered_set"
#include"map"
#include"unordered_map"
#include"string"
#include"cstring"
#include"iomanip"
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;cin>>n>>m;
    vector<int>l(m);
    vector<int>re(n,-1);
    for(int i=0;i<m;++i)
    {
        cin>>l[i];
        l[i]--;
    }
    set<int>my;
    for(int i=1;i<=n;++i)
        my.insert(i);
    for(int i=0;i<m-1;++i)
    {
        int x=l[i+1]-l[i];
        if(x<=0)
        {
            x+=n;
        }
        if(re[l[i]]==-1||re[l[i]]==x)
        {
            if(re[l[i]]!=-1)
                continue;
            re[l[i]]=x;
            if(my.find(x)==my.end())
            {
                cout<<"-1\n";return 0;
            }
            my.erase(x);
        }
        else 
        {
            cout<<"-1\n";
            return 0;
        }
    }
    for(int i=0;i<n;++i)
    {
        if(re[i]==-1)
        {
            if(my.empty())
            {
                cout<<"-1\n";return 0;
            }
            re[i]=*my.begin();
            my.erase(my.begin());
        }
    }
    for(int i=0;i<n;++i)
    {
        cout<<re[i]<<' ';
    }
    cout<<'\n';
}








