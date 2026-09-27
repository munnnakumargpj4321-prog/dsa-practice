class Solution {
public:
    string reverseParentheses(string s) {
        string s2="";
        int i=s.size()-1;
        stack<char>ans;
        for(auto ch :s){
            if(ch=='('){
                ans.push(ch);
            }else if(ch==')'){
                string temp="";
                while(ans.top()!='('){
                    temp+=ans.top();
                    ans.pop();
                }
                ans.pop();
                for(auto val:temp){
                    ans.push(val);
                }

            }else{
                ans.push(ch);
            }
        }
        while(!ans.empty()){
            if(ans.top()!='('&&ans.top()!=')'){
                s2+=ans.top();
            }
            ans.pop();
        }
        reverse(s2.begin(),s2.end());
            return s2;
    }
};
// class Solution {
// public:
//     string reverseParentheses(string s) {
//         string s2="";
//         int i=s.size()-1;
//         // for(int i=s.size()-1;i>=0;i--){
            
//         // }
//         while(i>=0){
//             string temp="";
//             while(i>=0&&s[i]!='('){
//                 s2+=s[i];
//                 i--;
//             } 
//             while(i>=0&&s[i]=='('){
//                 i--;
//                 while(i>=0&&s[i]!=')'){
//                     temp+=s[i];
//                     i--;
//                 }
                
//             }
//             reverse(temp.begin(),temp.end());
//             s2+=temp;
//             i--;

//         }
//         // reverse(s2.begin(),s2.end());
//         return s2;
//     }
// };