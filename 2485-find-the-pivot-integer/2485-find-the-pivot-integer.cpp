class Solution {
public:
    int pivotInteger(int n) {
        if(n==1)return 1;
        int sum=0;
        int totalsum=0;
        for(int i=1;i<=n;i++){
            totalsum+=i;
        }
        for(int i=1;i<=n;i++){
            sum+=i;
            if((totalsum-sum+i)==sum){
                return i;
            }
        }
        
       return -1;
    }
};