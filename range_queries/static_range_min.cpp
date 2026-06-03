#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define all(v) v.begin(),v.end()
//------------------------REMEMBER MY NAME: APPARITION_010_--------------------//

class segment
{
    vector<ll>seg;
    ll n;
    public:
    segment(vector<ll>&a)
    {
        n=a.size();
        seg.resize(4*n,0);
        build(0,0,n-1,a);
    }
    public:
    void build(ll node,ll start,ll end,vector<ll>&nums)
    {
        if(start==end)
        {
            seg[node]=nums[start];
            return;
        }
        int mid=(start+end)/2;
        build(2*node+1,start,mid,nums);
        build(2*node+2,mid+1,end,nums);
        seg[node]=min(seg[2*node+1],seg[2*node+2]);
    }
    ll query_tree(int node,int start,int end,int left,int right)
    {
        if(right<start || left>end)
        {
            return LLONG_MAX;

        }
        if(left<=start && end<=right)
        {
            return seg[node];
        }
        int mid=(start+end)/2;
        return min(query_tree(2*node+1,start,mid,left,right),query_tree(2*node+2,mid+1,end,left,right));

    }
    ll query(ll left,ll right)
    {
        return query_tree(0,0,n-1,left,right);
    }

};

class solution
{
    public:
void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(auto &x:a)cin>>x;
    segment seg(a);
    for(ll i=0;i<k;i++)
    {
        ll l,r;
        cin>>l>>r;
        cout<<seg.query(l-1,r-1)<<"\n";
    }
    



    
}
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int t;
    // cin>>t;
    // while(t--)
    solution sol;
    sol.solve();
    return 0;
}
