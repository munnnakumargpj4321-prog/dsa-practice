class Solution {
public:
    bool checkValidString(string s) {
        stack<int>st;
        stack<int>st2;
        // int count=0;
        // string sh="";
        int i=0;
        while(i<s.size()){
            if(s[i]=='('){
                st.push(i);

            }else if(s[i]=='*'){
                // if((!st.empty()&&s[i]==')'&&st.top()!='(')&&count==0)return false;
                // if(!st.empty()&&s[i]==')'&&st.top()=='('){
                    // st.pop();
                // }else if(s[i]==')'&&count>0){
                    // return false;
                // }
                st2.push(i);
            }else{

                // if(s[i]=='*'){
                    // count++;
                    // sh+=s[i];
                // }
                if(!st.empty()){
                    st.pop();
                }else if(!st2.empty()){
                    st2.pop();
                }else{
                    return false;
                }

            }
            i++;
        }
        while(!st.empty()&&!st2.empty()){
            if(st.top()>st2.top())return false;     
            st.pop();
            st2.pop();
        }
        return st.empty();
    }
};