class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        int l=s.length();
        for(int i=1;i<l;i++){
             sum+=abs((int)s[i-1]-(int)s[i]);
        }
        return sum;
    }
};