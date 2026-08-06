class Solution {
public:
    bool validplace(vector<string>&board,int row,int col,int n){
        //for all the colom
        for(int i=0;i<n;i++){
            if(board[row][i]=='Q'){
                return false;
            }
        }
        //for all the row
        for(int i=0;i<n;i++){
            if(board[i][col]=='Q'){
                return false;
            }
        }
        //for left side of the board box
        for(int i=row,j=col;i>=0&&j>=0;i--,j--){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        //for right side of the board box
        for(int i=row,j=col;i>=0&&j<n;i--,j++){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        return true;
    }
    void valid(vector<string>&board,vector<vector<string>>&ans,int n,int row){
        if(row==n){
            ans.push_back(board);
            return;
        }
        for(int i=0;i<n;i++){
            if(validplace(board,row,i,n)){
                board[row][i]='Q';
                valid(board,ans,n,row+1);
                board[row][i]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n,string(n,'.'));
        vector<vector<string>>ans;
        valid(board,ans,n,0);
        return ans;
    }
};