//DFS SOLTUION
class Solution {
 private:
 bool check(int node, int col, vector<int> &color, vector<vector<int>> adj)
 {
     color[node] = col;
     for( auto it : adj[node])
     {
         if(color[it]==-1)
         {
             if(check(it,!col,color,adj)==false)
             return false;
         }
         else if(color[it]==col)
         return false;
     }
     return true;
 }
 public:
 bool isBipartite(vector<vector<int>>& graph) {

      int n = graph.size();
      vector<int> color(n,-1);
       
      for( int i =0;i<n;i++)
      {
          if(color[i]==-1)
          if(check(i,0,color,graph)== false)
          return false;
      }
      return true;
 }
};
// BFS SOLUTION
// class Solution {
// private:
// bool check(int start, vector<int> &color, vector<vector<int>> adj)
// {
//     queue<int> q;
//     q.push(start);
//     color[start]=0;

//     while(!q.empty())
//     {
//         int node = q.front();
//         q.pop();

//         for( auto it : adj[node])
//         {
//             if(color[it]==-1)
//             {
//                 color[it]=!color[node];
//                 q.push(it);
//             }
//             else if(color[it]==color[node])
//             return false;
//         }
//     }
//     return true;

// }
// public:
//     bool isBipartite(vector<vector<int>>& graph) {
//         int V = graph.size();
//         vector<int> color(V,-1);
//         for(int i = 0;i<V;i++)
//         {
//             if(color[i]==-1)
//             {
//             if(check(i, color, graph))
//             return true;
//             }
//         }
//         return false;
//     }
// };
