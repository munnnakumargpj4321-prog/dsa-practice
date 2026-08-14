class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>ans;
        int j=0;
        int result=0;
        for(int i=0;i<s.size();i++){
            ans[s[i]]++;
            while(ans[s[i]]>2){
                ans[s[j]]--;
                j++;
            }
            result=max(result,i-j+1);
        }
        return result;
    }
};