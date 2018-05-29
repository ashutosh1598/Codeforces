#include"iostream"
#include"cmath"
#include"vector"
#include"algorithm"
#include"set"
#include"map"
#include"string"
#include"unordered_set"
using namespace std;
typedef long long ll;
static int ans[200005];
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n;scanf("%d",&n);
    int index=0;
    ans[index++]=1;
    unordered_set<int>myset;
    for(int i=0;i<n;++i)
    {
        int x;scanf("%d",&x);
        if(myset.find(x)!=myset.end())
        {
            ans[index++]=i+1+1;
            myset.clear();
        }
        else myset.insert(x);
    }
    if(!myset.empty())
        ans[index-1]=n+1;
    if(index==1)
    {
        printf("-1\n");
        return 0;
    }
    printf("%d\n",index-1);
    for(int i=0;i<index-1;++i)
    {
        printf("%d %d\n",ans[i],ans[i+1]-1);
    }
}
