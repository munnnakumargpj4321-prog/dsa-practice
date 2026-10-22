class Solution {
public:
    int getMaxRepetitions(string s1, int n1, string s2, int n2) {
        int count=0;
        int j=0;
        for(int i=0;i<n1;i++){
            for(auto ch :s1){
                if(ch==s2[j]){
                    j++;
                }
                if(j==s2.size()){
                    count++;
                    j=0;
                }
            }
        }
        return count/n2;
    }
};