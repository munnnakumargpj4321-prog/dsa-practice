class Solution {
public:
    int minOperations(vector<int>& nums) {
        long long operations = 0;
        int n = nums.size();
        for (int i=1;i<n;i++) {
            if (nums[i]<=nums[i-1]) {
                int diff=nums[i-1]-nums[i] + 1;
                operations+=diff;
                nums[i]+=diff; 
            }
        }
        return operations;
    }
};
