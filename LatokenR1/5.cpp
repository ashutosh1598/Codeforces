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

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a%b);
}

int lcm(int a, int b) {
    return a / gcd(a,b) * b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;

    int lc = lcm(n,k);
    int seg = n%k;
    int dif = k % seg;
    if (seg != 0 && lcm(seg, dif


    if ( (lc/n)%2 == 0) {
        cout << "-1\n" <<endl;
        return 0;
    }
    int ans = 0;
    int st = 0;
    for(int i = 0; ; ++i) {
        if (st + k >=n)break;
        cout << "?";
        for(int j = 0; j < k; ++j) {
            cout << ' ' << (st + j)%n + 1;
        }
        cout << endl;
        int xorr;
        cin>>xorr;
        ans = ans^xorr;
        st = (st + k)%n;
    }
    if (seg == 0) {
        cout << "! " << ans << endl;
        break;
    }
}
