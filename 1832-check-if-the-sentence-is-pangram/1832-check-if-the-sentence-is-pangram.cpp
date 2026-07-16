class Solution {
public:
    bool checkIfPangram(string sentence) {
            // for(auto i: sentence){
            //     if(i>='a'&&i<='z'){
            //         return true;
            //     }
            // }
            // return false;
        // int l=sentence.length();
        // if(l>=26){
        //     return true;
        // }else{
        //     return false;
        // }
        set<char>s;
        for(auto ch:sentence){
            s.insert(ch);
        }
        return s.size()==26;

    }
};