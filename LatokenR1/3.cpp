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

const ll mo = 1e9 + 7;

int find(vector<int>&par, int x) {
    return par[x] == -1? x :  par[x] = find(par, par[x]);
}

void merge(vector<int>&par, int x, int y) {
    int px = find(par, x);
    int py = find(par, y);
    if (px != py) {
        par[find(par, x)] = find(par, y);
    }
}

void solve() {
    int n;
    cin>>n;
    //vector<int> a1(n), a2(n);
    vector<int> p1(n+5), p2(n+5);
    for(int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        //a1[i] = x;
        p1[x] = i;
    }
    for(int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        //a2[i] = x;
        p2[x] = i;
    }
    vector<int> par(n, -1);
    for(int i = 1; i <= n; ++i) {
        if (p1[i] == p2[i]) {
            cout << "0\n";
            return;
        }
        merge(par, p1[i], p2[i]);
    }
    /*
    for (int i = 0; i < n; ++i ) {
        cout << par[i] << ' ';
    }
    cout <<"\n";
    */
    //cout << find(par, 1) << " find 1" << endl;
    set<int> ss;
    for(int i = 0; i < n; ++i) {
        int v = find(par, i);
        ss.insert(find(par, i));
    }
    int k = ss.size();
    ll ans = 1;
    for(int i = 0; i < k; ++i) {
        ans *= 2;
        ans %= mo;
    }
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
