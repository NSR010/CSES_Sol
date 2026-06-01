#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define all(v) v.begin(),v.end()
//------------------------REMEMBER MY NAME: APPARITION_010_--------------------//


void solve()
{
   ll n,k;
   ll x,a,b,c;
   cin>>n>>k;
   cin>>x>>a>>b>>c;
   vector<ll>v(n);
   v[0]=x;
   for(ll i=1;i<n;i++)
   {
    v[i]=(a*v[i-1]+b)%c;
   }
  vector<ll>res;
  deque<ll>dq;
  for(ll j=0;j<n;j++)
  {
    while(!dq.empty() && v[dq.back()]>=v[j])dq.pop_back();
    dq.push_back(j);

    if(dq.front()<=j-k)dq.pop_front();
    
    if(j>=k-1)res.push_back(v[dq.front()]);

    
  }

 

   ll ans=res[0];
   for(ll i=1;i<res.size();i++)
   ans^=res[i];


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
