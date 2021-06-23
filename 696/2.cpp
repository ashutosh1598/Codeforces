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

const int N = 1e5 + 10;
int lp[N+1];
vector<int> pr;
void build() {
    for (int i=2; i<=N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back (i);
        }
        for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
            lp[i * pr[j]] = pr[j];
    }
}

void solve(int d) {
    int d1 = -1, d2 = -1;
    for(int i = d+1; ; ++i)
    {
        if (lp[i]==i) {
            d1=i;
            break;
        }
    }
    for(int i = d+d1; ; ++i)
    {
        if(lp[i]==i) {
            d2 = i;
            break;
        }
    }
    cout<<1LL*d1*d2<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    build();
    int t;
    cin >> t;
    while(t--) {
        int d;
        cin>>d;
        solve(d);
    }
}
