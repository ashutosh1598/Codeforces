#include"iostream"
#include"cmath"
#include"vector"
#include"algorithm"
#include"list"
#include"set"
#include"unordered_set"
#include"map"
#include"unordered_map"
#include"string"
#include"cstring"
#include"iomanip"
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    bool a=false;
    int r[4][4];
    for(int i=0;i<4;++i)
        for(int j=0;j<4;++j)
            cin>>r[i][j];
    for(int i=0;i<4;++i)
    {

        if(r[i][3]==1)
        {
            for(int k=0;k<3;++k)
            {
                if(r[i][k])
                {
                    a=true;
                    break;
                }
            }
            if(r[(i+1)%4][0]||r[(i+3)%4][2]||r[(i+2)%4][1])
            {
                a=true;
                break;
            }
        }
    }
    if(a)
        cout<<"YES\n";
    else cout<<"NO\n";
}




