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
int a,b;string x,y;
list<int>pos;
bool solve(int m)
{
    for(int i=0;i<=b-a;++i)
    {
        int diff=0;
        pos.clear();
        for(int j=0;j<a;++j)
        {
            if(x[j]!=y[i+j])
            {
                pos.push_back(j+1);
                diff++;
            }
        }
        if(diff<=m)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>x>>y;
    int l=0,h=a;
    while(l<h-1)
    {
        int m=(l+h)/2;
        if(solve(m))
        {
            h=m;
        }
        else
        {
            l=m;
        }
    }
    if(solve(l))
    {
        cout<<l<<'\n';
    }
    else if(solve(h))
    {
        cout<<h<<'\n';
    }
    for(auto po:pos)
    {
        cout<<po<<' ';
    }
    cout<<'\n';
}
