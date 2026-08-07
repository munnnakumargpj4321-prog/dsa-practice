class Solution {
public:
    bool isPerfectSquare(int num) {
        long long temp=num;
        long long n=1;
        while(n*n<=temp){
            if(n*n==temp){
                return true;
            }
            n++;
        }
        return false;
    }
};