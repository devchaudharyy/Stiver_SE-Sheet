class Solution {
private:
void setzero(vector<vector<int>> &matrix, int row, int col, int m, int n)
{
    int r = row;
    int c = col;

    while(row>=0)
    {
    if(matrix[row][col]!=0)
    matrix[row][col]=555;
    row--;
    }
    row =r;
    while(row<m)
    {
    if(matrix[row][col]!=0)
    matrix[row][col]=555;
    row++;
    }
    row =r;
    while(col>=0)
    {
    if(matrix[row][col]!=0)
    matrix[row][col]=555;
    col--;
    }
    col = c;
    while(col<n)
    {
    if(matrix[row][col]!=0)
    matrix[row][col]=555;
    col++;
    }
}
public:
    void setZeroes(vector<vector<int>> &matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        for( int i =0;i<m;i++)
        for(int j =0;j<n;j++)
        if(matrix[i][j]==0)
        setzero(matrix,i,j,m,n);

        for(int i =0;i<m;i++)
        for(int j = 0; j<n;j++)
        if(matrix[i][j]==555)
        matrix[i][j]=0;
    }
};
