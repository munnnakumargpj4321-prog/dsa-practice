class Solution {
public:
    bool checkValidString(string s) {
        stack<int>st;
        stack<int>star;
        // int star=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
            }else if(s[i]=='*'){
                star.push(i);
            }else if(!st.empty()&&s[i]==')'){
                // if(s[i]==')'&&st.top()=='('){
                    st.pop();
                // }
            }else if(s[i]==')'&&!star.empty()){
                star.pop();
            }else {
                return false;
            }
        }
        // if(st.)
        while(!star.empty()&&!st.empty()){
            if(st.top()<star.top()){
                st.pop();
                star.pop();
            }else {
                return false;
            }
            
        }
        return st.empty();
    }
};