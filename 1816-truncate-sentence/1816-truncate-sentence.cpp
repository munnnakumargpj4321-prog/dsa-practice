class Solution {
public:
    string truncateSentence(string s, int k) {
        string result;
        int spaces=1;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                spaces++;
            }
            if(spaces<=k){
                result+=s[i];
            }
        }
        return result;
    }
};