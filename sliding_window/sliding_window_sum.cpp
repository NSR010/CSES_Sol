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
   ll i=0,j=i+k;
   ll sums=accumulate(v.begin()+i,v.begin()+j,0LL);
   res.push_back(sums);
  
   while(j<n)
   {
    i++;
    j=i+k;
    sums=sums-v[i-1]+v[j-1];
    res.push_back(sums);
   }
   
   

   ll ans=res[0];
   for(int i=1;i<res.size();i++)
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
