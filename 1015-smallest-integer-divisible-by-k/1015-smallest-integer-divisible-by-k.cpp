class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0||k%5==0)return -1;
        int rem=0;
        int count=0;
        while(true){
            rem=(rem*10+1)%k;
            count++;
            if(rem==0){
                return count;
                
            }
        }
        return -1;
    }
};