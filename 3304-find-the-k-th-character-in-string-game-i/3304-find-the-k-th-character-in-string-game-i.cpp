class Solution {
public:
    char kthCharacter(int k) {
        string s="a";
        while(s.size()<k){
            string t="";
            for(auto c:s){
                if(t=="z"){
                    t+="a";
                }else{
                    t+=c+1;
                }
            }
            s+=t;
        }
        return s[k-1];
    }
};