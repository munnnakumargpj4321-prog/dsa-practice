class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> matrix(n,vector<int>(n));
    int top=0;
    int buttom=n-1;
    int left=0;
    int right=n-1;
    int num=1;
    while(top<=buttom&&left<=right){
        //top
        for(int i=left;i<=right;i++){
            matrix[top][i]=num++;
        }
        //right
        for(int i=top+1;i<=buttom;i++){
            matrix[i][right]=num++;
        }
        //buttom
        for(int i=right-1;i>=left;i--){
            if(top==buttom){
                break;
            }
            matrix[buttom][i]=num++;
        }
        //left
        for(int i=buttom-1;i>top;i--){
            if(left==right){
                break;
            }
            matrix[i][left]=num++;
        }
        left++;
        top++;
        buttom--;
        right--;
    }
    return matrix;
    }
};