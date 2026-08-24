class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0)return 1;
        int ans=10;
        int number=9;
        int left=9;
        while(n>1&&left>0){
            number*=left;
            ans+=number;
            n--;
            left--;
        }
        return ans;

    }
};