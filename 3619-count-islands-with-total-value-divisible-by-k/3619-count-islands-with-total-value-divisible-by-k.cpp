class Solution {
public:
    void fun(vector<vector<int>>& grid, int k,int row,int col,long long& sum){
        if(row<0||col<0||row>=grid.size()||col>=grid[0].size())return;
        if(grid[row][col]<=0)return;
        
        long long  val=grid[row][col];
        grid[row][col]=0;
        sum+=val;
        fun(grid,k,row,col+1,sum);
        fun(grid,k,row,col-1,sum);
        fun(grid,k,row+1,col,sum);
        fun(grid,k,row-1,col,sum);

    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]>0){
                    long long  sum=0;
                    fun(grid,k,i,j,sum);  
                    if(sum%k==0){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};