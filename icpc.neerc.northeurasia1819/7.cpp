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
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        vector<int>a(7),pr(7),su(7);
        int sum=0;
        for(int i=0;i<7;++i)
        {
            cin>>a[i];
            pr[i]=a[i];
            su[i]=a[i];
            sum+=a[i];
        }
        for(int i=1;i<7;++i)
        {
            pr[i]+=pr[i-1];
        }
        for(int i=5;i>=0;--i)
        {
            su[i]+=su[i+1];
        }
        /*
        if(k<=sum)
        {
            int ans=1000;
            for(int i=0;i<7;++i)
            {
                for(int j=i;j<7;++j)
                {
                    int da=pr[j];
                    if(i)da-=pr[i-1];
                    if(da>=k)ans=min(ans,j-i+1);
                }
            }
            cout<<ans<<'\n';
            continue;
        }
        */
        if(0&&k<=2*sum)
        {
            int ans=1000;
            for(int i=0;i<=7;++i)
            {
                for(int j=-1;j<7;++j)
                {
                    int da=0;
                    if(j>-1)
                    {
                        da+=pr[j];
                    }
                    if(i<7)
                    {
                        da+=su[i];
                    }
                    if(da>=k)ans=min(ans,j+1+7-i);
                }
            }
            cout<<ans<<'\n';
        }
        else
        {
            int fullweeks=(k/sum);
            fullweeks-=2;
            int fulldays=(fullweeks)*7;
            int lef=k-(fullweeks)*sum;
            if(lef>2*sum)
            {
                fullweeks++;
                fulldays+=7;
                lef-=sum;
            }
            int ans=1000;
            for(int i=0;i<=7;++i)
            {
                for(int j=-1;j<7;++j)
                {
                    int da=0;
                    if(j>-1)
                    {
                        da+=pr[j];
                    }
                    if(i<7)
                    {
                        da+=su[i];
                    }
                    if(da>=lef)ans=min(ans,j+1+7-i);
                }
            }
            cout<<fulldays+ans<<'\n';
        }
    }
}








