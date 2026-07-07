class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = nums.size();
        if (l == 1) return nums[0];
        int s = 0, e = l - 1;
        
        while (s <= e) {
            int mid = s + (e - s) / 2;

            // Edge cases first
            if (mid == 0 && nums[0] != nums[1]) return nums[0];
            if (mid == l - 1 && nums[l - 1] != nums[l - 2]) return nums[l - 1];

            // Check if mid itself is unique
            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) {
                return nums[mid];
            }

            // Parity logic
            if (mid % 2 == 0) {
                // even index → pair should start here
                if (nums[mid] == nums[mid + 1]) {
                    s = mid + 2;   // pair intact, move right
                } else {
                    e = mid - 1;   // broken pair, move left
                }
            } else {
                // odd index → pair should start at mid-1
                if (nums[mid] == nums[mid - 1]) {
                    s = mid + 1;   // pair intact, move right
                } else {
                    e = mid - 1;   // broken pair, move left
                }
            }
        }
        return nums[s];
    }
};

// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) {
//         int l=nums.size();
//         for(int i=1;i<l;i++){
//             if(nums[i-1]<nums[i]&&nums[i+1]>nums[i]){
//                 return nums[i];
//             }
//         }
//         return -1;
        
//     }
// };