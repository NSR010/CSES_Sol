#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define all(v) v.begin(),v.end()
//------------------------REMEMBER MY NAME: APPARITION_010_--------------------//

struct custom_hash {
    static uint64_t splitmix64(uint64_t x)
    {
        x+=0x9e3779b97f4a7c15;

        x=(x^(x>>30))*0xbf58476d1ce4e5b9;

        x=(x^(x>>27))*0x94d049bb133111eb;

        return x^(x>>31);
    }

    size_t operator()(uint64_t x) const
    {
        static const uint64_t FIXED_RANDOM =
            chrono::steady_clock::now().time_since_epoch().count();

        return splitmix64(x + FIXED_RANDOM);
    }
};

void solve()
{
 ll n,k;
 cin>>n>>k;
 vector<ll>v(n);
 for(auto &x:v)cin>>x;
unordered_map<ll,ll,custom_hash>freq;

for(int j=0;j<k;j++)
    freq[v[j]]++;
    cout<<freq.size()<<" ";

for(int j=k;j<n;j++)
{
    freq[v[j-k]]--;
    if(freq[v[j-k]]==0)
    freq.erase(v[j-k]);
    freq[v[j]]++;
    cout<<freq.size()<<" ";
}

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
