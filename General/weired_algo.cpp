#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define all(v) v.begin(),v.end()
//------------------------REMEMBER MY NAME: APPARITION_010_--------------------//


void solve()
{
    ll n;
    cin>>n;
    vector<int>res;
    res.push_back(n);
    while(true)
    {
        if(n==1)break;
        if(n%2==0){
         n/=2;
         res.push_back(n);}
        
        else if(n%2!=0){
        n=n*3+1;
        res.push_back(n);
        }
    }
    for(auto &x:res)
    cout<<x<<" ";
    cout<<"\n";
   
   
    
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
