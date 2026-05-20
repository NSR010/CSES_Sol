#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define all(v) v.begin(),v.end()
//------------------------REMEMBER MY NAME: APPARITION_010_--------------------//


void solve()
{
    ll n;
    cin>>n;
    bool t=true;
    vector<int>s1,s2;
    for(int i=n;i>0;i--)
    {   if(i%2==0)
        s1.push_back(i);
        else 
        s2.push_back(i);
    }
    if(abs(s1.back()-s2.front())==1)t=false;
    else t=true;

    if(t)
    {
        for(int i=0;i<(s1.size());i++)
        {
            cout<<s1[i]<<" ";
        }
        for(int i=0;i<s2.size();i++)
        cout<<s2[i]<<" ";
        cout<<"\n";
    }
    else 
    cout<<"NO SOLUTION"<<"\n";



    
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
