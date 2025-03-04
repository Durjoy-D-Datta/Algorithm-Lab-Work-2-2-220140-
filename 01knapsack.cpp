#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    int capa;
    cin>>n;
    cin>>capa;
    int profit[n];
    int weight[n];
    for (int i=1;i<=n;i++){
        cin>>profit[i];
    }
    for (int i=1;i<=n;i++){
        cin>>weight[i];
    }
    int tab[n+1][capa+1];
    for (int i = 0; i <=n; i++)
    {
        for (int w = 0; w<=capa; w++)
        {
           if (i==0|w==0)
            tab[i][w]=0;
           
           else if (weight[i]<=w)
              tab[i][w]= max(profit[i]+tab[i-1][w-weight[i]],tab[i-1][w]);
           else 
           tab[i][w]=tab[i-1][w];
        }
        
    }
    cout<<tab[n][capa];
    
}

