/*
Question: Two Sum in a Sorted Array

Given a sorted array of integers and a target value, find two different
elements whose sum is equal to the target and return their indices. Return an
empty vector if no such pair exists.

How I solved it:
1. I placed one pointer at the beginning and another at the end of the array.
2. I calculated the sum of the values at both pointers.
3. If the sum was equal to the target, I returned the two indices.
4. If the sum was smaller, I moved the left pointer forward to increase it.
5. If the sum was larger, I moved the right pointer backward to decrease it.

Important: This two-pointer approach works because the array is sorted in
ascending order.

Time Complexity: O(n)
Space Complexity: O(1), excluding the returned result
*/

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
    // Example: nums[1] + nums[3] = 7 + 15 = 22.
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
