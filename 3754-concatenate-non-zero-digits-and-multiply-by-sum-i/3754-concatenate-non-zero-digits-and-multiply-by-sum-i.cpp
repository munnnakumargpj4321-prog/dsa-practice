class Solution {
public:
    long long sumAndMultiply(int n) {
        int sum=0;
        double digit=0;
        int place=1;
        while(n>0){
            int ls=n%10;
            if(ls!=0){
                sum+=ls;
                digit=digit+ls*place;
                place*=10;
            }
            n/=10;
        }
        return digit*sum;
    }
};