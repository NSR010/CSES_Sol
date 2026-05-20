#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define all(v) v.begin(),v.end()
//------------------------REMEMBER MY NAME: APPARITION_010_--------------------//


void solve()
{
    string  s;
    cin>>s;
    int c=1,mc=INT_MIN;
    for(int i=1;i<=s.size();i++)
    {
        if(s[i]==s[i-1])c++;
        else c=1;
        mc=max(mc,c);
    }
    cout<<mc<<"\n";
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
