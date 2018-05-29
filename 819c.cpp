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
using namespace std;
typedef long long ll;
typedef long double ld;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<ll>plist;
    const ll maxn=1e6+10;
    bool p[maxn];
    for(int i=0;i<maxn;++i)p[i]=i%2;
    p[2]=1;p[1]=0;
    plist.push_back(2);
    for(int i=3;i<maxn;i+=2;)
    {
        if(!p[i])continue;
        plist.push_back(i);
        for(int j=i*i;j<maxn;j+=i)
        {
            p[j]=false;
        }
    }
    plist.resize(plist.size());
    ll n1,n2,n3,m1,m2,m3,s1,s2,s3;
    cin>>n1>>n2>>n3>>m1>>m2>>m3>>s1>>s2>>s3;

}
