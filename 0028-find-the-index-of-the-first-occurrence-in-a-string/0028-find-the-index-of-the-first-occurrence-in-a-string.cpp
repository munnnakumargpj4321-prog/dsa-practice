class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty())return 0; 
        int i=0;
        int j=0;
        while(j<haystack.size()&&i<needle.size()){
            if(needle[i]==haystack[j]){
                i++;
                j++;
                if(i==needle.size()){
                    return j-needle.size();
                }
            }else{
                j=j-i+1;
                i=0;
            }
        }
        return -1;
    }
};