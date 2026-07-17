class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();

        vector<bool> present(n + 1, false);
        vector<int> ans;

        for (int num : nums) {
            present[num] = true;
        }

        for (int i = 1; i <= n; i++) {
            if (present[i] == false) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
