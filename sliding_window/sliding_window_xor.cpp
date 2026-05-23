#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define all(v) v.begin(),v.end()
//------------------------REMEMBER MY NAME: APPARITION_010_--------------------//


void solve()
{
 ll n,k;
 cin>>n>>k;
 ll x,a,b,c;
 cin>>x>>a>>b>>c;
vector<ll>res;
 vector<ll>v(n);
 v[0]=x;
 for(int i=1;i<n;i++)
 {
    v[i]=(a*v[i-1]+b)%c;
 }
ll xors=0;
int i=0;
for(int j=0;j<n;j++)
{
    xors^=v[j];
    if(j-i+1==k)
    {

        res.push_back(xors);
        xors=xors^v[i];
        i++;
    }
    

}


ll ans=res[0];
for(int i=1;i<(int)res.size();i++)
{
    ans^=res[i];
}
cout<<ans<<"\n";

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int t;
    // cin>>t;
    // while(t--)
    solve();
    return 0;
}
