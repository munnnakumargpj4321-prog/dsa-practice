/*
Question: Search for One Target Using Binary Search

Given a sorted array of integers and a target value, return the index of the
target. Return -1 if the target is not present in the array.

How I solved it:
1. I set the search range from the first index to the last index.
2. I found the middle index of the current range.
3. If the middle value was the target, I returned its index.
4. If the middle value was smaller, I searched the right half.
5. Otherwise, I searched the left half.
6. I repeated these steps until the target was found or the range became empty.

Important: Binary search requires the array to be sorted in ascending order.

Time Complexity: O(log n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& values, int target) {
    int start = 0;
    int end = static_cast<int>(values.size()) - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (values[mid] == target) {
            return mid;
        }

        if (values[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1;
}

int main() {
    // Example: the target 7 is present at index 3.
    vector<int> values = {1, 3, 5, 7, 9, 11, 13};
    int target = 7;
    int index = binarySearch(values, target);
    if (index != -1) {
        cout << "Element " << target << " found at index " << index << endl;
    } else {
        cout << "Element " << target << " not found in the vector" << endl;
    }

    return 0;
}
