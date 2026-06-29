#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(const vector<int>& nums, int target) {
        int first = -1;
        int last = -1;
        int start = 0;
        int end = static_cast<int>(nums.size()) - 1;

        // Find the first occurrence of target.
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] >= target) {
                if (nums[mid] == target) {
                    first = mid;
                }
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        start = 0;
        end = static_cast<int>(nums.size()) - 1;

        // Find the last occurrence of target.
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] <= target) {
                if (nums[mid] == target) {
                    last = mid;
                }
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return {first, last};
    }
};

int main() {
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    Solution obj;
    vector<int> ans = obj.searchRange(nums, target);

    for (int position : ans) {
        cout << position << " ";
    }

    return 0;
}
