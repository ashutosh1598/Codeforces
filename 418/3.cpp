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
int a[26][1600];
string s;int n;
bool solve(int m,int x,char ch)
{
    int in=ch-'a';
    int ans=a[in][m-1];
    if(ans+x>=m)
        return true;
    for(int i=m+1;i<n;++i)
    {
        ans=a[in][i]-a[in][i-m];
        if(ans+x>=m)
            return true;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cin>>s;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<26;++j)
        {
            if(i)
                a[j][i]+=a[j][i-1];
        }
        a[s[i]-'a'][i]++;
    }
    int q;
    while(q--)
    {
        int x;char ch;
        cin>>x>>ch;
        int l=x,h=n;
        while(l<h-1)
        {
            int m=(l+h)/2;
            if(solve(m,x,ch))
            {
                l=m;
            }
            else
            {
                h=m;
            }
        }
        if(solve(h,x,ch))
        {
            cout<<h<<'\n';
        }
        else cout<<l<<'\n';
    }
}
