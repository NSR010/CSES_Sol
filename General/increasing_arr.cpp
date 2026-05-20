#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define all(v) v.begin(),v.end()
//------------------------REMEMBER MY NAME: APPARITION_010_--------------------//


void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &x:a)cin>>x;
    ll s=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            s+=abs(a[i-1]-a[i]);
            a[i]=a[i-1];
        }
    }
    cout<<s<<"\n";
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
