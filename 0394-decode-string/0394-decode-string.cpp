class Solution {
public:
    string decodeString(string s) {
        stack<string>ans1;
        stack<int>ans2;
        string temp1="";
        int temp2=0;
        for (auto ch:s){
            if(ch>='a'&&ch<='z'){
                temp1+=ch;
            }else if(ch>='0'&&ch<='9'){
                temp2=temp2 *10+(ch-'0');
            }else if(ch=='['){
                ans1.push(temp1);
                ans2.push(temp2);
                temp1="";
                temp2=0;
            }else{
                string prev1=ans1.top();
                ans1.pop();
                int prev2=ans2.top();
                ans2.pop();
                string temp3="";
                for(int i=0;i<prev2;i++){
                    temp3+=temp1;
                }
                temp1=prev1+temp3;
            }
        }
        return temp1;
    }
};
