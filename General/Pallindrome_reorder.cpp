#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    int n=s.size();
    string res(n,' ');
    map<char,int>mp;
    for (char ch:s) mp[ch]++;
    int oddc=0;
    int oddchar=0;
    for(auto &it:mp)
    {
        if(it.second%2!=0)
        {
            oddc++;oddchar=it.first;
        }
    }
    if((oddc>1)||(n%2==0 && oddc>0)){cout<<"NO SOLUTION"<<"\n";return;}
   
    int i=0,j=n-1;
    for(auto &it:mp)
    {
        char ch=it.first;
        int freq=it.second;
        
        while(freq>=2)
        {
            res[i++]=ch;
            res[j--]=ch;
            freq-=2;
        }
           
        }
        if(oddc==1)res[n/2]=oddchar;


    
    cout<<res<<"\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int t;
    // cin >> t;
    // while (t--)
     solve();
    return 0;
}
