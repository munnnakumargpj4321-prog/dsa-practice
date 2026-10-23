class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        bool found1=true;
        bool found2=true;
        for(int i=0;i<s1.size();i++){
            if(s1[i]<s2[i]){
                found1=false;
            }
            if(s2[i]<s1[i]){
                found2=false;
            }
        }
        return found1||found2;
    }
};