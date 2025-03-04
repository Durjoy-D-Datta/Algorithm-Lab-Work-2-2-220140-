#include<bits/stdc++.h>
using namespace std;


vector<int>dijkstra(int v,int s,vector<vector<int>>adj[]){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    vector<int>dist(v,INT_MAX);
    dist[s]=0;
    pq.push({0,s});
    while (!pq.empty())
    {
       int dis=pq.top().first;
       int node=pq.top().second;
       pq.pop();

       for (auto adjN : adj[node])
       {
         int ver=adjN[0];
         int w=adjN[1];
         if (dist[ver]>dis+w){
            dist[ver]=dis+w;
            pq.push({dis+w,ver});
         }
       }

    }
    return dist;
    
}



int main () 
{
   
    int v,e,s;
    cin>>v;
    cin>>e;
    vector<vector<int>>adj[v];
    for (int i = 0; i < e; i++)
    {  int u,v,w;
       cin>>u>>v>>w;
       adj[u].push_back({v,w});
       adj[v].push_back({u,w});
    }
    vector<int>res;
    res=dijkstra(v,0,adj);
    for (int i = 0; i < v; i++)
    {
       if (res[i]==INT_MAX)
       {
        cout<<"infinity";
       }
       else
       {
        cout<<res[i]<<endl;
       }
       
       
    }
    

}
