class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> first(nums1.begin(), nums1.end());
        unordered_set<int> second(nums2.begin(), nums2.end());
        vector<int>ans1,ans2;
        for (auto x:first) {
            if(second.find(x)==second.end())
                ans1.push_back(x);
        }
        for (auto x:second) {
            if(first.find(x)==first.end())
                ans2.push_back(x);
        }
        return {ans1,ans2};
    }
};

