class Solution {
public:
    int reverseDegree(string s) {
      int sum=0;
      for(int i=0;i<s.size();i++){
        char ch=s[i];
        int value='z'-ch+1;
        // if(i==0){
        //     sum+=(value*1);
        // }else{
        //     sum+=(value*i+1);
        // }
        sum+=(value*(i+1));
      }  
      return sum;
    }
};