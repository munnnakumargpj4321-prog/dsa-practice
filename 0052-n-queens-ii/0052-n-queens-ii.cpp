class Solution {
public:
    bool validplace(vector<string>&ans,int row,int col,int n){
        //checking wheree in the  fixed row 'Q exit or not 
        for(int i=0;i<n;i++){
            if(ans[row][i]=='Q'){
                return false;
            }
        }
        //checkinhg that whether in the  fixed col 'Q exit or not  
        for(int i=0;i<n;i++){
            if(ans[i][col]=='Q'){
                return false;
            }
        }
        //cheking that is on top on left side digonal whether 'Q exit or not 
        for(int i=row,j=col;i>=0&&j>=0;i--,j--){
            if(ans[i][j]=='Q'){
                return false;
            }
        }
        //checking that in on right on top on digonal whether 'Q exit or not 
        for(int i=row,j=col;i>=0&&j<n;i--,j++){
            if(ans[i][j]=='Q'){
                return false;
            }
        }
        return true;
    }
    void valid(vector<string>&ans,int &count,int n,int row){
        if(row==n){
            count++;
            return;
        }
        for(int i=0;i<n;i++){
            if(validplace(ans,row,i,n)){
                ans[row][i]='Q';
                valid(ans,count,n,row+1);
                ans[row][i]='.';
            }
        }
    }
    int totalNQueens(int n) {
        vector<string>ans(n,string(n,'.'));
        int count=0;
        valid(ans,count,n,0);
        return count;
    }
};