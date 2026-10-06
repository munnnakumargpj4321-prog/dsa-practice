class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push('(');
            }else {
                if(!st.empty()&&s[i]==')'&&st.top()=='('){
                    st.pop();
                }else{
                    st.push(')');
                }
            }
        }
        // int count=0;
        // while(!st.empty()){
            // if(st.top()==')')count++;
            // else{
                // count++;
            // }
            // st.pop();
        // }
        return st.size();
    }
};