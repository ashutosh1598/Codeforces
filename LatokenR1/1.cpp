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

vector<pair<int,int> > di = { {1,0}, {-1, 0}, {0, 1}, {0, -1} };

void solve() {
    int n, m;
    cin>>n>>m;
    vector<string> re(n);
    for(int i = 0; i < n; ++i) {
        cin>>re[i];
    }
    int par = -1;
    int paw = -1;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if (re[i][j] == 'R') {
                if ( (i+j)%2 == 0) {
                    if (par == 1) {
                        cout << "NO\n";
                        return;
                    }
                    par = 0;
                }
                else {
                    if (par == 0) {
                        cout << "NO\n";
                        return;
                    }
                    par = 1;
                }
            }
            else if (re[i][j] == 'W') {
                if ( (i+j)%2 == 0) {
                    if (par == 0) {
                        cout << "NO\n";
                        return;
                    }
                    par = 1;
                }
                else {
                    if (par == 1) {
                        cout << "NO\n";
                        return;
                    }
                    par = 0;
                }
            }
        }
    }
    cout << "YES\n";
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j) {
            if( (i+j)%2 == 0) {
                if (par == 0) {
                    cout << 'R';
                }
                else {
                    cout << 'W';
                }
            }
            else {
                if (par == 0) {
                    cout << 'W';
                }
                else {
                    cout << 'R';
                }
            }
        }
        cout << '\n';
    }

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
