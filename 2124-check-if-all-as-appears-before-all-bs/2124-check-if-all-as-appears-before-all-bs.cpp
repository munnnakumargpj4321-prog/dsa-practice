class Solution {
public:
    bool checkString(string s) {
        bool ans=true;
        int count1=0;
        int count2=0;
        for(auto ch:s){
            if(ch=='b'){
                count1++;
            }
            if(ch=='a'){
                count2++;
            }
        }
        if(count1==s.size())return true;
        if(count2==s.size())return true;
        // for(int i=0;<s.size();i++){

        // }
        int i=0;
        int j=0;
        while(i<s.size()-1){
            // if(s[i]=='a'){
            //     while(i<s.size()&&s[i]!='b'){
            //         i++;
            //     }
            // }
            // if(s[i]=='b'){
            //     while(i<s.size()&&s[i]!='a'){
            //         i++;
            //     }
            // }
            if(s[i]=='b'&&s[i+1]=='a'){
                ans=false;
            }
            i++;
        }
        return ans;
    }
};