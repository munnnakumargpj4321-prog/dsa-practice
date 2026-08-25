class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
    unordered_set<int>ans(nums.begin(),nums.end());
    int mul=k;
    while(true){
        if(ans.find(mul)==ans.end()){
            return mul;
        }
        mul+=k;
    }
    return -1;
    }
};