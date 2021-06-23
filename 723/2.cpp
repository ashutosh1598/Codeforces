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

ll pow10[20];
int no() {
    cout << "NO\n";
}
int yes() {
    cout << "YES\n";
}

int solve() {
    ll x;
    cin >> x;
    if (x < 111) {
        if (x%11 == 0) {
            return yes();
        }
        else return no();
    }
    int n = 2;
    while(true) {
        if (x%pow10[n+2] == x%pow10[n+1]) {
            break;
        }
        n++;
    }
    vector<int>b(n+3);
    vector<ll>suf(n+3);
    vector<ll>val(n+3);
    suf[0] = x%10;
    val[0] = suf
    for(int i = 1; i <=n; ++i) {

    }
    if (x%10 != suf[1]) return no();
    return yes();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    pow10[0] = 1;
    for(int i = 1; i < 15; ++i) {
        pow10[i] = 10*pow10[i-1];
    }
    while(t--) {
        solve();
    }
}
