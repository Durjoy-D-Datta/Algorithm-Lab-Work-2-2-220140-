#include<bits/stdc++.h>
using namespace std;

int tsp(int mask,int pos,int n, vector<vector<int>>&cost) 
{
{
   if (mask==(1<<n)-1)
   return cost[pos][0];
   

   }
   int ans= INT_MAX;
   for (int city  = 0; city < n; city++)
   {
   
    if ((mask & (1<<city))==0 )
    {
        int newAns=cost[pos][city]+tsp(mask|(1<<city),city,n,cost);
        ans=min(ans,newAns);
    }
}

return  ans;

}

int main () {
    int n=4;
    vector<vector<int>>cost=
    { {0,20,25,42},
      {20,0,42,30},
      {25,42,0,10},
      {34,30,10,0}
    };
    
   int minPath=tsp(1,0,n,cost);
   cout<<minPath;

}