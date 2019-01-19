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
int col=1,row=1;
void p()
{
    char ch='a'+col-1;
    cout<<ch<<row<<' ';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    p();
    while(1)
    {
        if(row==7&&col==6)
        {
            if(n==3)
            {
                col++;
                p();
                col++;
                p();
                row++;
                p();
                cout<<'\n';
                return 0;
            }
            else if(n==2)
            {
                col+=2;
                p();
                row++;
                p();
                cout<<'\n';
                return 0;
            }
            else
            {
                col+=2;
                p();
                n--;
                col-=1;
                p();
                n--;
                row++;
                p();
                n--;
                while(n>1)
                {
                    col--;
                    n--;
                    p();
                }
                col=8;
                p();
                cout<<'\n';
                return 0;
            }
        }
        if(n==2)
        {
            if(col==8)
            {
                row++;
                n--;
                p();
                row=8;
                p();
            }
            else
            {
                row=8;
                n--;
                p();
                col=8;
                p();
            }
            cout<<'\n';
            return 0;
        }
        if(row%2==1)
        {
            if(col==8)
            {
                row++;
            }
            else
            {
                col++;
            }
        }
        else
        {
            if(col==1)
            {
                row++;
            }
            else
            {
                col--;
            }
        }
        n--;
        p();
    }
}

