#include <bits/stdc++.h>
using namespace std;

int sol=0;
int n=8;
   vector<bool>cols;
   vector<bool>diag1;
   vector<bool>diag2;
   vector<vector<char>>board;

   void backtrack(int row)
   {
    if(row==n){sol++;return;}
    for(int col=0;col<n;col++)
    {
        if(board[row][col]=='*')continue;
        if(!cols[col] && !diag1[row-col+n-1] && !diag2[row+col])
        {
            cols[col]=diag1[row-col+n-1]=diag2[row+col]=true;
            backtrack(row+1);
            cols[col]=diag1[row-col+n-1]=diag2[row+col]=false;
            
        }
    }
   }
void solve() {
    cols.assign(n,false);
    diag1.assign(2*n,false);
    diag2.assign(2*n,false);
    board.assign(n,vector<char>(n));
   for(int i=0;i<8;i++)
   {
    for(int j=0;j<8;j++)
    {
       cin>>board[i][j];
        

    }
   }
   backtrack(0);
   cout<<sol<<"\n";

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
