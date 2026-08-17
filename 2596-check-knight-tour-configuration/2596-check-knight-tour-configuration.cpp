class Solution {
public:
    bool valid(vector<vector<int>>& grid,int row,int col,int n,int num){
        if(row<0||col<0||row>=n||col>=n||grid[row][col]!=num){
            return false;
        }
        if(num==n*n-1){
            return true;
        }
        int ans1=valid(grid,row+2,col+1,n,num+1);
        int ans2=valid(grid,row+1,col+2,n,num+1);
        int ans3=valid(grid,row+2,col-1,n,num+1);
        int ans4=valid(grid,row+1,col-2,n,num+1);
        int ans5=valid(grid,row-1,col+2,n,num+1);
        int ans6=valid(grid,row-2,col+1,n,num+1);
        int ans7=valid(grid,row-2,col-1,n,num+1);
        int ans8=valid(grid,row-1,col-2,n,num+1);
        return ans1||ans2||ans3||ans4||ans5||ans6||ans7||ans8;
    }
    bool checkValidGrid(vector<vector<int>>& grid) {
        return valid(grid,0,0,grid.size(),0);
    }
};