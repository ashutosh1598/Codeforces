#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define v vector<ll> 
#define vv vector<v>
#define p pair<ll,ll>
#define all(v) v.begin(),v.end()
#define pi 3.1415926535897932384626433832795
#define arrayinput int n; int m; cin>>n>>m; v arr (n+1,-1); for (int i=0; i<n; i++){int temp; cin>>temp;arr[i]=temp;}
int LIM=1e5+10;
map<ll,vector<int> > position;
v dp(2*LIM,0);
int n;
ll query(int l ,int r)
{
    ll ans=0;
    l+=n-1;
    r+=n-1;
    while (l<=r)
    {
        if (l%2==1)
        {
            ans=max(ans,dp[l]);
            l=l+1;
        }
        if (r%2==0)
        {
            ans=max(ans,dp[r]);
            r=r-1;
        }
        l=l/2;
        r=r/2;
    }
    return ans;
}
void update(int index, ll val)
{
    index+=n-1;
    dp[index]=val;
    while (index>=1)
    {
        dp[index]=max(val,dp[index]);
        index/=2;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    vector<ll> volume(1);
    for (int i=1; i<=n; i++)
    {
        ll r,h;
        cin>>r>>h;
        volume.push_back(r*r*h);
        //position[r*r*h]=i;
        position[r*r*h].push_back(i);
    }
    ll ans=0;
    int counter=0;
    for (map<ll,vector<int> >::iterator it=position.begin(); it!=position.end(); it++)
    {
        counter++;
        for(int ppp:it->second)
        {
            ll a=it->first;
            //ll b=it->second;
            ll b=ppp;
            ll maxi=query(1,b);
            //if (counter==3)
            //  cout<<maxi<<"a"<<dp[1]<<endl;
            update(b,maxi+volume[b]);
            ans=max(ans,maxi+volume[b]);
            //    cout<<ans<<" "<<b<<endl;
        }
    }
    // cout<<dp[5]<<endl;
    //cout<<ans<<endl;
    ans=query(1,n);
    cout<<setprecision(12)<<fixed;
    long double pii = 3.1415926535897932384626433832795;
    long double fans=ans*pii;
    /*
       if(volume[1]==1273)
       {
       cout<<ans<<'\n';
       }
     */
    cout<<fans<<endl;
    return 0;
}
