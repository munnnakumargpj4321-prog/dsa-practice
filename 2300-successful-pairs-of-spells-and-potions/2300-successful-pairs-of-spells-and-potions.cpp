class Solution {
public:
int pairs(vector<int>& potions, long long success, int first) {
        int low = 0;
        int high = potions.size();
        while (low < high) {
            int mid = low + (high - low) / 2;
            if ((long long)potions[mid] * first >= success) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return potions.size() - low;
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>ans;
        int l=spells.size();
        sort(potions.begin(),potions.end());
        for(int i=0;i<l;i++){
            int first=spells[i];
            int result=pairs(potions,success,first);
            ans.push_back(result);
        }
        return ans;
    }
};