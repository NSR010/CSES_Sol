#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define all(v) v.begin(),v.end()
//------------------------REMEMBER MY NAME: APPARITION_010_--------------------//


void solve()
{
    ll n;
    cin>>n;
    vector<int>a(n-1);
    for(auto &x:a)cin>>x;
    ll s=accumulate(a.begin(),a.end(),0LL);
    ll sum=((n)*(n+1))/2;
    cout<<sum-s<<"\n";
   
    
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
