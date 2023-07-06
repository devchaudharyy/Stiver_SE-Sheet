class Solution {
  public:
     void dfs( int start, int vis[], vector<int> &ans, vector<int> adj[])
    {
        vis[start]=1;
        ans.push_back(start);
        for( auto it: adj[start])
        {
            if(!vis[it])
            dfs(it,vis,ans,adj);
        }
    }
        
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
     int vis[V] = {0};
     vector<int> ans;
     int start = 0;
     dfs(start, vis,ans,adj);
     return ans;
        }
   
};
