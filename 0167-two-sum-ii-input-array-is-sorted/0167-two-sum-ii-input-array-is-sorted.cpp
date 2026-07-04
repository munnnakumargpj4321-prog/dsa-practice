class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=numbers.size();
        int start=0;
        int end=l-1;
        vector<int>ans;
        while(start<end){
            if(numbers[start]+numbers[end]>target)end--;
            if(numbers[start]+numbers[end]<target)start++;
            if(numbers[start]+numbers[end]==target){
                ans.push_back(start+1);
                ans.push_back(end+1);  
                return ans;
            }
            
        }
    return ans;
    }
};