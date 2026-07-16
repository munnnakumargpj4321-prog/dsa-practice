class Solution {
public:
    bool checkInclusion(string s1, string s2) {
         int l1=s1.size();
         int l2=s2.size();
        vector<int>fre1(26,0);
        vector<int>fre2(26,0);
        if(l1>l2){
            return false;
        }
        for(int i=0;i<s1.length();i++){
            fre1[s1[i]-'a']++;
            fre2[s2[i]-'a']++;
        }
        if(fre1==fre2){
            return true;
        }
        for(int i=l1;i<l2;i++){
            fre2[s2[i]-'a']++;
            fre2[s2[i-l1]-'a']--;
            if(fre1==fre2){
                return true;
            }            
        }
        return false;
    }
};
