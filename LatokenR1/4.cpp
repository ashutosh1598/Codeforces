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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    set<pair<int,int>> edges;
    vector<int> d1(n+1);
    cout << "? 1" << endl;
    set<int>node2;
    vector<int>vis(n+1, 0);
    vis[1] = 1;
    for(int i = 1; i <= n; ++i) {
        cin >> d1[i];
        if (d1[i] == 1) {
            edges.insert(mp(1, i));
        }
        else if (d1[i] == 2) {
            node2.insert(i);
            vis[i] = 1;
        }
    }
    int count = 1;
    while(count < (n+1)/2) {
        if (node2.empty())break;
        int ve = *node2.begin();
        node2.erase(node2.begin());
        cout << "? " << ve << endl;
        for(int i = 1; i <= n; ++i) {
            cin >> d1[i];
            if (d1[i] == 1) {
                int a = i;
                int b = ve;
                if (a > b)swap(a,b);
                edges.insert(mp(a,b));
            }
            else if (d1[i] == 2 && !vis[i]) {
                vis[i] = 1;
                node2.insert(i);
            }
        }
        count++;
    }
    //assert(edges.size() == n-1);
    cout << "!\n";
    for(auto & e : edges) {
        cout << e.ff << ' ' << e.ss << endl;
    }
}













