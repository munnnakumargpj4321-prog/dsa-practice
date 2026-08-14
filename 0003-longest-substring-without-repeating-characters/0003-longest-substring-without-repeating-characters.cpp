class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>ans;
        int j=0;
        int maxi=0;
        for(int i=0;i<s.size();i++){
            ans[s[i]]++;
            while(ans[s[i]]>1){
                ans[s[j]]--;
                j++;
            }
            maxi=max(maxi,i-j+1);
        }
        return maxi;
    }
};