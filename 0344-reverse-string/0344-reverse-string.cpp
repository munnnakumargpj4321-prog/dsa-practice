class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=s.size();
        int ls=l-1;
        for(int i=0;i<l/2;i++){
            int temp=s[i];
            s[i]=s[ls];
            s[ls]=temp;
            ls--;
        }
        
    }
};