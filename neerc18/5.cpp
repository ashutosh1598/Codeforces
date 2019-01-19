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
const int maxn=2e5+5;
ll n,m,t;
vector<ll>re;
int fu(int mid)
{
    ll cur=0;
    int consb=0;
    ll lastb=0;
    int ans=0;
    for(int i=0;i<n;++i)
    {
        if(re[i]>mid)continue;

        if(cur+re[i]>t)break;
        consb++;
        ans++;
        lastb+=re[i];
        cur+=re[i];

        if(consb==m)
        {
            cur+=lastb;
            consb=0;
            lastb=0;
            if(cur>t)break;
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c;
    cin>>c;
    while(c--)
    {
        cin>>n>>m>>t;
        re.resize(n);
        set<int>my;
        for(int i=0;i<n;++i)
        {
            int x;
            cin>>x;
            re[i]=x;
            my.insert(re[i]);
        }
        int lo=1,hi=2e5;
        while(lo<hi-1)
        {
            //cout<<lo<<" "<<hi<<" lo hi\n";
            int mid=(lo+hi)/2;
            auto it = lower_bound(all(my),mid);
            if(it==my.end())
            {
                it--;
            }
            if(*it>hi)
            {
                it--;
            }
            mid = *it;
            int le=fu(mid),ri=fu(mid+1);
            if(le>=ri)
            {
                lo=mid;
            }
            else
            {
                hi=mid+1;
            }
        }
        int x=fu(lo),y=fu(hi);
        if(x>y)
        {
            cout<<x<<' '<<lo<<'\n';
        }
        else
        {
            cout<<y<<' '<<hi<<'\n';
        }
    }
}
