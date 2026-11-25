class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool ans = true;
        int i = 0;

        while(i < nums.size()-1 && nums[i] == nums[i+1]) {
            i++;
        }

        if(i == nums.size()-1) return true;

        if(nums[i] < nums[i+1]) {
            while(i < nums.size()-1) {
                if(nums[i] > nums[i+1]) {
                    ans = false;
                    break;
                }
                i++;
            }
        }
        else {
            while(i < nums.size()-1) {
                if(nums[i] < nums[i+1]) {
                    ans = false;
                    break;
                }
                i++;
            }
        }

        return ans;
    }
};