class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>ans;
        // int score=0;
        ans.push(0);
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                ans.push(0);
            }else{
                // if(ans.empty())return;
                // if(!ans.empty()&&s[i]==')'&&ans.top()=='('){
                    // score++;
                    // ans.pop();
                // }
                int val=ans.top();
                ans.pop();
                // score+=(2*idx-i+1);
                int temp=(val==0)?1:2*val;
                ans.top()+=temp;

            }
        }
        return ans.top();
    }
};