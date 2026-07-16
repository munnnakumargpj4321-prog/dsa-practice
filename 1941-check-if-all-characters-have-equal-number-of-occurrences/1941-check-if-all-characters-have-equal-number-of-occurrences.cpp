class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int>accr(26,0);
        for(int i=0;i<s.size();i++){
            accr[s[i]-'a']++;
        }
        int freq=0;
        for(int i=0;i<26;i++){
            if(accr[i]>0){
                if(freq==0){
                    freq=accr[i];
                }else if (freq!=accr[i]){
                    return false;
                }
            }
        }
        return true;
    }
};