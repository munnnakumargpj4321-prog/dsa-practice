class Solution {
public:
    int balancedStringSplit(string s) {
        int lcount=0;
        int rcount=0;
        int count=0;
        for(int i:s){
            if(i=='L'){
                lcount++;
            }
            if(i=='R'){
                rcount++;
            }
            if(lcount==rcount){
                count++;
                lcount=0;
                rcount=0;

            }
        }
        return count;
    }
};