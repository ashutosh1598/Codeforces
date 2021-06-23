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

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    ll ans = 0;
    for(int i = 0; i < n; ++i) {
        int le = i > 0 ? a[i-1] : 0;
        int ri = i < n-1 ? a[i+1] : 0;
        int ma = max(le, ri);
        if (ma < a[i]) {
            ans += a[i] - ma;
            a[i] = ma;
        }
    }
    for (int i = 0; i < n; ++i) {
        int vh = i > 0 ? max(a[i],a[i-1]) - min(a[i], a[i-1]) : a[i];
        ans += vh;
    }
    ans += a[n-1];
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
