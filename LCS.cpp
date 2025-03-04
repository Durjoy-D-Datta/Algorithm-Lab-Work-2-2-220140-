#include<bits/stdc++.h>
using namespace std;

int lcs(int i,int j, string &a, string &b,vector<vector<int>>&dp) {
    if (i>=a.size()||j>=b.size()){
        return 0;
    }
    if (dp[i][j]!=-1)
    return dp[i][j];
    else if (a[i]==b[j])
{
    return dp[i][j]=1+ lcs(i+1,j+1,a,b,dp);
}
  
    else {
        return dp[i][j]= max (lcs(i+1,j,a,b,dp),lcs(i,j+1,a,b,dp));
    }
   


}

int main() {

    string A,B;
    cin>>A;
    cin>>B;
    vector<vector<int>>dp(A.size(),vector<int>(B.size(),-1));

   int res=lcs(0,0,A,B,dp);
   cout<<res;



}