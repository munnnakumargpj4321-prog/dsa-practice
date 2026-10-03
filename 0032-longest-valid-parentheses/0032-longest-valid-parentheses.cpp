class Solution {
public:
    int longestValidParentheses(string s) {
        if(s.empty())return 0;
        int count=0;
        stack<int>ans;
        ans.push(-1);
        int i=0;
        int maxi=0;
        while(i<s.size()){
            if(s[i]=='('){
                ans.push(i);
            }else {
                ans.pop();
                if(ans.empty())ans.push(i);
                else{    
                    maxi=max(maxi,i-ans.top());
                }
            }
            // maxi=max(count,maxi);
            i++;
        }
        return maxi;
    }
};      