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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k,n;
    cin>>k>>n;
    vector<string>r(k);
    for(int i=0;i<k;++i)
    {
        cin>>r[i];
    }
    set<int>pos
    for(int i=0;i<k;++i)
    {
        for(int j=i+1;j<k;++j)
        {
            int dpo=0;
            for(int p=0;p<n;++p)
            {
                if(r[i][p]!=r[j][p])
                {
                    dpo++;
                    pos.insert(i);
                    pos.insert(j);
                }
            }
            if(  !   (dpo==0||dpo==2))
            {
                cout<<"-1\n";
                return 0;
            }
            if(pos.size()>2)
            {
                cout<<"-1\n";
                return 0;
            }
        }
    }
    if(pos.size()==0)
    {
        cout<<r[0]<<'\n';
        return 0;
    }
    if(pos.size()==2)
    {
        int x=*pos.begin();
        pos.erase(pos.begin());
        int y=*pos.begin();
        string s=r[0];

    }
}












