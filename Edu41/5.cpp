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
const int MAXN=2e5+3;
const int maxn=2e5+3;
vector<int> t[4*MAXN];
int a[maxn];
void build (int v, int tl, int tr) {
	if (tl == tr)
		t[v] = vector<int> (1, a[tl]);
	else {
		int tm = (tl + tr) / 2;
		build (v*2, tl, tm);
		build (v*2+1, tm+1, tr);
		merge (t[v*2].begin(), t[v*2].end(), t[v*2+1].begin(), t[v*2+1].end(),
			back_inserter (t[v]));
	}
}
int query (int v, int tl, int tr, int l, int r, int x) {
	if (l > r)
		return 0;
	if (l == tl && tr == r) {
		vector<int>::iterator pos = lower_bound (t[v].begin(), t[v].end(), x);
        return t[v].end()-pos;
		if (pos != t[v].end())
			return *pos;
		//return INF;
	}
	int tm = (tl + tr) / 2;
	return query (v*2, tl, tm, l, min(r,tm), x) + query (v*2+1, tm+1, tr, max(l,tm+1), r, x);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        if(a[i]>n)
        {
            a[i]=n;
        }
    }
    build(1,0,n-1);
    ll ans=0;
    for(int i=0;i<n;++i)
    {
        int le=i+1;
        int ri=a[i]-1;
        ans+=1LL*query(1,0,n-1,le,ri,i+1);//>=i+1
    }
    cout<<ans<<'\n';
}





