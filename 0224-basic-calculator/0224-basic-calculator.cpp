// class Solution {
// public:
//     int calculate(string s) {
//         // s=s.strip();
//         stack<int>ans;
//         int i=0;
//         int sign=1;
//         int result=0;
//         int num=0;
//        while(i<s.size()){
//             if(isdigit(s[i])){
//                 num*=10+(s[i]-'0');
//             }else if(s[i]=='+'){
//                 result+=num*sign;
//                 sign=1;
//                 num=0;
//             }else if(s[i]=='-'){
//                 result+=num*sign;
//                 sign=-1;
//                 num=0;
//             }else if(s[i]=='('){
//                 ans.push(result);
//                 result=0;
//                 ans.push(sign);
//                 sign=1;
//             }else if(s[i]==')'){
//                 result+=ans.top();
//                 ans.pop();
//                 result*=ans.top();
//                 ans.pop();
//             }
//             i++;
//        }
//        return result;
//     }
// };
class Solution {
public:
    int calculate(string s) {
        // s=s.strip();
        stack<int>ans;
        int i=0;
        int sign=1;
        long long  result=0;
        long long  num=0;
        while(i<s.size()){
            if(isdigit(s[i])){
                num=num*10+(s[i]-'0');
            }
            else if(s[i]=='+'){
                result+=sign*num;
                num=0;
                sign=1;
            }
            else if(s[i]=='-'){
                result+=sign*num;
                num=0;
                sign=-1;
            }
            else if(s[i]=='('){
                ans.push(result);
                ans.push(sign);
                result=0;
                sign=1;
            }else if(s[i]==')'){
                result+=num*sign;
                num=0;
                int prevsign=ans.top();
                ans.pop();
                int prevresult=ans.top();
                ans.pop();
                 result=prevresult+(result*prevsign); 
            }
            i++;

        }
        result+=num*sign;
        return result;
    }
};