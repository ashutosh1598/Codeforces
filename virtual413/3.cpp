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
#define mk(a,b) make_pair(a,b)
using namespace std;
typedef long long ll;
typedef pair<int,int> pi;
pair<int,int> co[100000],di[100000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,c,d;cin>>n>>c>>d;
    int s1=0,s2=0;
    for(int i=0;i<n;++i)
    {
        int b,p;char ch;cin>>b>>p>>ch;
        if(ch=='C')
        {
            ++s1;co[s1++]=mk(b.p);
        }
    }
}



