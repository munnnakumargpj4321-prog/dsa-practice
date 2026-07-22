class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        int top=0;
        int left=0;
        int right=col-1;
        int buttom=row-1;
        vector<int>ans;
        while(top<=buttom&&left<=right){
            //top
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            //right
            for(int i=top+1;i<=buttom;i++){
                ans.push_back(matrix[i][right]);
            }
            //bottom
            for(int i=right-1;i>=left;i--){
                  if(top==buttom){
                    break;
                }
                ans.push_back(matrix[buttom][i]);
            }
            //left
            for(int i=buttom-1;i>top;i--){
                  if(left==right){
                    break;
                }
                ans.push_back(matrix[i][left]);
            }
            top++;
            right--;
            buttom--;
            left++;
        }
        return ans;
    }
};