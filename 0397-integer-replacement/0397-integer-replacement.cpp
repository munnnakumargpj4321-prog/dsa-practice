class Solution {
public:
    int integerReplacement(int n) {
        long long x=n;
        int count=0;
        while(x>1){
            count++;
            if(x%2==0){
                x/=2;
            }else if(x==3||x%4==1){
                x-=1;
            }else{
                x+=1;
            }
        }
        return count;
    }
};