#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(const vector<int>& nums, int target) {
    int left = 0;
    int right = static_cast<int>(nums.size()) - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];

        if (sum == target) {
            return {left, right};
        }

        if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15, 18};
    int target = 22;
    vector<int> result = twoSum(nums, target);

    if (result.size() == 2) {
        cout << result[0] << " " << result[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }

    return 0;
}
