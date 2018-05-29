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
int a[1500],b[1500],c[1500];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    set<int>my;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        my.insert(i+1);
    }
    vector<int>pos;
    for(int i=0;i<n;++i)cin>>b[i];
    for(int i=0;i<n;++i)
    {
        if(a[i]==b[i])
        {
            my.erase(a[i]);
            c[i]=a[i];
        }
        else pos.push_back(i);
    }

    if(my.size()==1)
    {
        c[pos[0]]=*my.begin();
    }
    else
    {
        if(my.find(a[pos[0]])!=my.end()&&my.find(b[pos[1]])!=my.end())
        {
            c[pos[0]]=a[pos[0]];
            c[pos[1]]=b[pos[1]];
        }
        else
        {
            c[pos[0]]=b[pos[0]];
            c[pos[01]]=a[pos[1]];
        }
    }
    for(int i=0;i<n;++i)
    {
        cout<<c[i]<<' ';
    }
    cout<<'\n';
}
