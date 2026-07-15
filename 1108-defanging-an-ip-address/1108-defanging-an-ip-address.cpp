class Solution {
public:
    string defangIPaddr(string address) {
        char sh='.';
        string result;
        for(int s:address){
            if(s==sh){
                result+="[.]";
            }else{
                result+=s;
            }
        }
        return result;
        
    }
};