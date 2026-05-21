#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define all(v) v.begin(),v.end()
//------------------------REMEMBER MY NAME: APPARITION_010_--------------------//


void solve()
{
    ll x,y;
    ll ans=0;
    cin>>x>>y;
    if(x<=y)
    {
        if(y%2!=0)
        {
            ans=y*y-(x-1);
            cout<<ans<<"\n";
        }
        else {
        ans+=(y-1)*(y-1)+(x);
        cout<<ans<<"\n";
        }
    }
    else if(x>y)
    {
        if(x%2==0){
        ans+=(x*x)-(y-1);
        cout<<ans<<"\n";
        }
        else
        {
        ans+=(x-1)*(x-1)+(y);
        cout<<ans<<"\n";
        }

    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t;
     cin>>t;
     while(t--)
    solve();
    return 0;
}
