class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();
        if(n==1) return n;
        int i=0,j=n-1;
        while(i<=j){
            if(s[i]!=s[j] ) break;
            while(i<n-1 && s[i]==s[i+1]) i++;
            while(j>0 && s[j]==s[j-1]) j--;
            i++;
            j--;
            if(i==j) return 1;
        }
        if(i>j) return 0;
        return j-i+1;
    }
};