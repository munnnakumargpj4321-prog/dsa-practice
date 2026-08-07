class Solution {
public:
    bool valid(vector<vector<char>>& board,int row,int col,int num){
        for(int k=0;k<9;k++){
            if(k!=col&&board[row][k]==num){
                return false;
            }
        }
        for(int k=0;k<9;k++){
            if(k!=row&&board[k][col]==num){
                return false;
            }
        }
        int sr=(row/3)*3;
        int sc=(col/3)*3;
        for(int k=sr;k<=sr+2;k++){
            for(int l=sc;l<=sc+2;l++){
                if((k != row || l != col)&&board[k][l]==num){
                    return false;
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j] != '.') {
                    if(!valid(board, i, j, board[i][j])) { 
                        return false;
                    }
                }
            }
        }
        return true;
    }
};