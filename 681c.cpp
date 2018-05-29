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
struct op
{
    string x;int y;
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    multiset<int>my;
    int n;cin>>n;
    vector<op>rec;
    for(int i=0;i<n;++i)
    {
        string x;cin>>x;int y=0;
        if(x[0]!='r')
            cin>>y;
        op ob;ob.x=x;ob.y=y;
        if(x[0]=='r')
        {
            if(my.empty())
            {
                op kk;kk.x="insert";
                kk.y=100;
                rec.push_back(kk);
                rec.push_back(ob);
            }
            else
            {
                rec.push_back(ob);
                my.erase(my.begin());
            }
        }
        else if(x[0]=='i')
        {
            rec.push_back(ob);
            my.insert(y);
        }
        else if(x[0]=='g')
        {
            if(my.empty())
            {
                my.insert(y);
                op kk;kk.x="insert";
                kk.y=y;
                rec.push_back(kk);
                rec.push_back(ob);
            }
            else
            {
                while((!my.empty())&&*my.begin()<y)
                {
                    op kk;kk.x="removeMin";
                    rec.push_back(kk);
                    my.erase(my.begin());
                }
                if(my.empty()||*my.begin()>y)
                {
                    my.insert(y);
                    op kk;kk.x="insert";
                    kk.y=y;
                    rec.push_back(kk);
                    rec.push_back(ob);
                }
                else
                {
                    rec.push_back(ob);
                    //my.erase(my.begin());
                }
            }
        }
    }
    cout<<rec.size()<<'\n';
    for(int i=0;i<rec.size();++i)
    {
        string x=rec[i].x;int y=rec[i].y;
        cout<<x;
        if(x[0]!='r')
        {
            cout<<' '<<y<<'\n';
        }
        else cout<<'\n';
    }
}




