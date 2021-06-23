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
    string x;
    cin >> n >> x;
    string a = x;
    int prev = -1;
    for(int i = 0; i < n; ++i) {
        if (prev == -1) {
            a[i] = '1';
            prev = 1 + (x[i]-'0');
        }
        else if ( 1 + (x[i]-'0') != prev) {
            a[i] = '1';
            prev = 1 + (x[i] - '0');
        }
        else {
            a[i] = '0';
            prev = x[i]-'0';
        }
    }
    cout<<a<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
