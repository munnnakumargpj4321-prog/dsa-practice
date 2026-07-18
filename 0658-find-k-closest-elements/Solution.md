# you can see this solution this is easy solution and optimize 

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->

# Approach
<!-- Describe your approach to solving the problem. -->

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```cpp []
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        sort(arr.begin(), arr.end(), [&](int a, int b) {
            if (abs(a - x) == abs(b - x))
                return a < b;
            return abs(a - x) < abs(b - x);
        });

            vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(arr[i]);
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};
```