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
#include"unordered_set"
#include"map"
#include"unordered_map"
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
const int maxn=1e7+5;
vector<char>ch(maxn,'a');
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    int fin=-1;
    for(int i=0;i<n;++i)
    {
        string x;cin>>x;
        int len=x.length();
        int k;cin>>k;
        int j=-1;
        for(int jj=0;jj<k;++jj)
        {
            int pos;cin>>pos;
            pos--;
            for(int p=max(pos,j);p<pos+len;++p)
            {
                if(ch[p]=='a')
                    ch[p]=x[p-pos];
            }
            j=pos+len;
        }
        fin=max(fin,j);
    }
    cout<<string(ch.begin(),ch.begin()+fin)<<'\n';
}
