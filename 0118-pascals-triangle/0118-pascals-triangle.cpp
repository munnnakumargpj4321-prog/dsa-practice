class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=0;i<numRows;i++){
            vector<int>row(i+1,1);
            for(int j=1;j<i;j++){
                row[j]=ans[i-1][j-1]+ans[i-1][j];
            }
            ans.push_back(row);
        }
        return ans;

        
    }
};
// class Solution {
// public:
//     int fact(int n){
//         if(n==1||n==0)return 1;
//         return n*fact(n-1);
//     }
//     int first(int i,int j){
//         return fact(i) / (fact(j) * fact(i - j));
//     }
//     vector<vector<int>> generate(int numRows) {
//         vector<vector<int>>ans;
//         for(int i=0;i<numRows;i++){
//             vector<int>row;
//             for(int j=0;j<=i;j++){
//             row.push_back(first(i,j));
//             }
//             ans.push_back(row);
//         }
//         return ans;

        
//     }
// };