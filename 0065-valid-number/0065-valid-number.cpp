class Solution {
public:
    bool isNumber(string s) {
        bool digit=false;
        bool dot=false;
        bool expo=false;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                digit=true;
            }else if(s[i]=='.'){
                if(dot||expo){
                    return false;
                }
                dot=true;
            }else if(s[i]=='e'||s[i]=='E'){
                if(expo||!digit){
                    return false;
                }
                expo=true;
                digit=false;
            }else if(s[i]=='+'||s[i]=='-'){
                if(i!=0&&s[i-1]!='e'&&s[i-1]!='E'){
                    return false;
                }
            }else{
                return false;
            }

        }
        return digit;
    }
};