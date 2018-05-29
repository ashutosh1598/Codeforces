#include"iostream"
#include"cmath"
#include"string"
#include"vector"
#include"algorithm"
using namespace std;
typedef long long ll;
struct rat
{
    int a,b;
    bool operator<(const rat & ob)const
        {
            return a<ob.a;
        }
};
int main()
{
    int n;
    cin>>n;
    vector<rat>tab(n);
    bool change=false;
    for(int i=0;i<n;++i)
    {
        int x,y;cin>>x>>y;
        rat temp;temp.a=x;temp.b=y;
        tab[i]=temp;
        if(x!=y)
            change=true;
    }
    if(change)
    {
        cout<<"rated\n";
        return 0;
    }
    for(int i=0;i<n-1;++i)
    {
        if(tab[i]<tab[i+1])
        {
            cout<<"unrated\n";
            return 0;
        }
    }
    cout<<"maybe\n";
    return 0;
}
