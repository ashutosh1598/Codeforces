#include"iomanip"
#include"iostream"
#include"limits"
#include"cmath"
#include"vector"
#include"algorithm"
#include"list"
#include"queue"
#include"stack"
#include"set"
#include"map"
#include"string"
#include"cstring"
#include"assert.h"
using namespace std;
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define mp make_pair
#define pb push_back
#define mset(a,b) memset(a,b,sizeof(a))
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
int vo[100];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string s;
    cin>>s;
    vo[0]=1;
    vo['e'-'a']=1;
    vo['i'-'a']=1;
    vo['o'-'a']=1;
    vo['u'-'a']=1;
    vo['y'-'a']=1;
    while(1)
    {
        int co=0;
        string y=s;
        for(int i=0;i<s.length()-1;++i)
        {
            if(vo[s[i]-'a']&&vo[s[i+1]-'a'])
            {
                y=s.substr(0,i+1)+s.substr(i+2);
                co=1;
                break;
            }
        }
        if(co==0)break;
        s=y;
    }
    cout<<s<<'\n';
}
