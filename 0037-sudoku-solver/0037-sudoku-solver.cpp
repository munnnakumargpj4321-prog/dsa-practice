class Solution {
public:
    bool safe(vector<vector<char>>& board,int row,int col,int num){
        for(int i=0;i<9;i++){
            if(board[row][i]==num){
                return false;
            }
        }
        for(int i=0;i<9;i++){
            if(board[i][col]==num){
                return false;
            }
        }
        int startrow=(row/3)*3;
        int startcol=(col/3)*3;
        for( int i=startrow;i<=startrow+2;i++){
            for(int j=startcol;j<=startcol+2;j++){
                if(board[i][j]==num){
                    return false;
                }
            }
        }
        return true;
    }
    bool valid(vector<vector<char>>& board,int row,int col){
        if(row==9){
            return true;
        }
         int nextrow=row,nextcol=col+1;
         if(nextcol==9){
            nextrow=row+1;
            nextcol=0;
         }
        if(board[row][col]!='.'){
            return valid(board,nextrow,nextcol);
        }
        for(int i='1';i<='9';i++){
            if(safe(board,row,col,i)){
                board[row][col]=i;
                if(valid(board,nextrow,nextcol)){
                    return true;
                }
                board[row][col]='.';
            }

        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        valid(board,0,0);
    }
};
