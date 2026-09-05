class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        if((num[n-1]-'0')%2!=0){
            return num; 
        }
        bool found=false;
        for(char ch:num){
            if((ch-'0')%2!=0){
                found=true;
                break;
            }
        }
        if(!found){
            return "";
        }
        for(int i=n-1;i>=0;i--){
             if((num[i]-'0')%2!=0){
                return num.substr(0,i+1);
             }
        }
        return "";
    }
};

















