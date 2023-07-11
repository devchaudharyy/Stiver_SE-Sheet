class Solution {
private:
void bfs( int i, int j, vector<vector<int>> &vis,vector<vector<char>> grid)
{
    vis[i][j]=1;
    int m = grid.size();
    int n = grid[0].size();
    queue<pair<int,int>> q;
    q.push({i,j});
    while(!q.empty())
    {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        int drow[]= {-1,0,1,0};
        int dcol[] = {0,1,0,-1};
       // for(int i = 0; i<4;i++)
        for(int j= 0;j<4;j++)
        {
            int nrow = row + drow[j];
            int ncol = col+ dcol[j];
            if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && !vis[nrow][ncol] && grid[nrow][ncol]=='1')
            {
                vis[nrow][ncol]=1;
                q.push({nrow,ncol});
            }

        }
    }
}
public:
    int numIslands(vector<vector<char>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    int count = 0;
    vector<vector<int>> vis(m,vector<int>(n,0));
    for( int i = 0;i<m;i++)
    for(int j = 0;j<n;j++)
    if(!vis[i][j] && grid[i][j]=='1')
    {
       count++;
       bfs(i,j,vis,grid);
    }

return count;
    }
};
