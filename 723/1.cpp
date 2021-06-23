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
void solve()
{
    int n;
    cin>>n;
    vector<int>re(2*n);
    set<int>s;
    for(int i = 0; i < 2*n; ++i) {
        int x;
        cin>>x;
        s.insert(x);
    }
    for(int i = 0; i < 2*n; ++i) {
        auto it = s.begin();
        if (i < n){
            re[2*i] = *it;
        }
        else {
            int in = (i-n)*2+1;
            re[in] = *it;
        }
        s.erase(it);
    }
    for(int i = 0; i < 2*n; ++i) {
        cout << re[i] << ' ';
    }
    cout<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
