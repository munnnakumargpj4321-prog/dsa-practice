class Solution {
public:
    int fun(int n){
        int temp=n;
        int temp2=0;
        while(temp>0){
            int ls=temp%10;
            temp2+=ls;
            temp/=10;
        }
        return temp2;
    }
    int addDigits(int num) {
        int n=num;
        while(n>9){
            n=fun(n);
        }
        return n;
    }
};