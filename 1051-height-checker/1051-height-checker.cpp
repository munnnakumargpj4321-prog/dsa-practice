class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>expected(heights);
        sort(expected.begin(),expected.end());
        int l=heights.size();
        long long count=0;
        for(int i=0;i<l;i++){
            if(expected[i]!=heights[i]){
                count++;
            }
        }
     return count;   
    }
};