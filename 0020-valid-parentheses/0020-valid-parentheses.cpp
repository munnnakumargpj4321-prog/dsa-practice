class Solution {
public:
    bool isValid(string s) {
    stack<char>ans;
    for(auto c:s){
        if(c=='('||c=='{'||c=='['){
            ans.push(c);
        }else{
            if(ans.empty())return false;
            if(c==')'&&ans.top()!='('){
                return false;
            }
            if(c=='}'&&ans.top()!='{'){
                return false;
            }
            if(c==']'&&ans.top()!='['){
                return false;
            }
            ans.pop();
        }
        

    }
    return ans.empty();
    }
};
// class Solution {
// public:
//     bool isValid(string s) {
//     int big=0;        
//     int small=0;        
//     int midium=0;
//     for(char ch:s){
//         if(ch=='(')small++;
//         if(ch==')')small--;
//         if(ch=='[')big++;
//         if(ch==']')big--;
//         if(ch=='{')midium++;
//         if(ch=='}')midium--;
//     }        
//     return big==0&&small==0&&midium==0;
//     }
// };