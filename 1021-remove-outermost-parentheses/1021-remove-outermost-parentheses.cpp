class Solution {
public:
    string removeOuterParentheses(string s) {
        string str="";
        stack<char>st;
        int count=0;
        int count2=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(count>0)str+='(';
                count++;
            }else{
                // if(s[i]==')'&&count==1){
                //     count--;
                // }else if(s[i]==')'&&count>1){
                //     count2++;
                //     count--;
                // }
                count--; 
                if(count>0)str+=')';
            }
        }
        // for(int i=1;i<=count2;i++){
        //     str+='(';
        //     str+=')';
        // }
        return str;

    }
};