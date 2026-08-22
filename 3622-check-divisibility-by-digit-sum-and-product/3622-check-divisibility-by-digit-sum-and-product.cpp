class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
        long long sum=0;
        long long mul=1; 
        while(temp>0){
            long long ls=temp%10;
            sum+=ls;
            mul*=ls;
            temp/=10;
        }
        return n%(sum+mul)==0;
    }
};