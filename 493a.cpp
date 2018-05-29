#include"iostream"
#include"cmath"
#include"vector"
#include"algorithm"
#include"set"
#include"map"
#include"string"
#include"unordered_map"
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string x,y;cin>>x>>y;
    int n;cin>>n;
    map<char,string>team;team['h']=x;team['a']=y;
    unordered_map<int,char>myset;
    unordered_map<int,char>red;
    while(n--)
    {
        int time,number;
        char place,card;
        cin>>time>>place>>number>>card;
        if(card=='r'&&!(red.find(number)!=red.end()&&red[number]==place))
        {
            cout<<team[place]<<' '<<number<<' '<<time<<'\n';red[number]=place;
        }
        else if((myset.find(number)!=myset.end()&&myset[number]==place)&&!(red.find(number)!=red.end()&&red[number]==place))
        {
            cout<<team[place]<<' '<<number<<' '<<time<<'\n';red[number]=place;
        }
        else
        {
            myset[number]=place;
        }
    }
}
