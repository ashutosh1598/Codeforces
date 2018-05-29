#include"iostream"
#include"cmath"
#include"vector"
#include"algorithm"
#include"set"
#include"map"
#include"string"
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;cin>>s;
    vector<int>bef;
    int len=s.length();
    int curr=0;
    for(int i=0;i<len;++i)
    {
        if(s[i]=='(')
        {
            ++curr;
        }
        else if(s[i]==')')
        {
            --curr;
        }
        else
        {
            bef.push_back(1);--curr;
        }
        if(curr<0)
        {
            cout<<"-1\n";
            return 0;
        }
    }
    int ff=0;
    for(int i=len-1;i>=0;--i)
    {
        if(s[i]=='#')
            break;
        else if(s[i]=='(')
            --ff;
        else ++ff;
        if(ff<0)
        {
            cout<<"-1\n";
            return 0;
        }
    }
    if(curr>0)
        bef[bef.size()-1]+=curr;
    for(int i=0;i<bef.size();++i)
        cout<<bef[i]<<'\n';
}











