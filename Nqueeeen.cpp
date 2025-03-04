#include<bits/stdc++.h>
using namespace std;



bool isSafe(int row , int col ,vector<string>board,int n ) {

    int duprow =row;
    int dupcol=col;

    //colum check korer dokar nai cuz protibar different column a entry hocce
    //row sudhu pichoner dike check korlei hobe cuz dhape dhape samne jacce so samne thakar prosnoi othe na
    //temon diagonal o sudhu upper , lower pichoner dike deklei hobe

    //for row
     duprow =row;
     dupcol=col;
    while (col>=0)
    {
       if(board[row][col]=='Q') return false;
       col--;
    }

     row = duprow;
     col=dupcol;
    //for up dialgonal
    while (col>=0 && row>=0)
    {
       if(board[row][col]=='Q') return false;
       col--;
       row--;
    }

    row = duprow;
    col=dupcol;
     //for lower dialgonal
       while (col>=0 && row<n)
       {
          if(board[row][col]=='Q') return false;
          col--;
          row++;
       }
    return true;

}


void solveNQ (vector<vector<string>>&ans ,vector<string>board,int n, int col ) {

//base case
if (col==n) {
    ans.push_back(board);
    return;
}

//column er proti row te 'Q' bosaiye dekbo safe naki 
for (int row =0; row < n; row++)
{
    if(isSafe(row ,col, board,n))
    {
        board[row][col]='Q';
        solveNQ(ans , board , n , col+1);
        //recursive false return korle er porerline exe hobe so porer line a backtrack hobe 
        board[row][col]='.';
    }
}

//1st func

}
vector<vector<string>> Nqueen(int n) {
  
    vector<vector<string>>ans;
    vector<string>board(n,string(n,'.'));
    solveNQ(ans , board , n , 0);
    return ans;

    
}


int main () {

    int n;
    cin>>n;
    vector<vector<string>>solutions=Nqueen(n);
    //cout<<solutions[1][0];

    for (auto &solution : solutions ) 
    {

        for (auto &row : solution ) 
        {
            cout<<row<<endl;
        }

        cout<<endl;
    }

}