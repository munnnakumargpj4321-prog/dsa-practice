class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int even=0;
        int odd=0;
        for(int i=1;i<=2*n;i+=2){
            odd+=i;
        }
        for(int i=2;i<=2*n;i+=2){
            even+=i;
        }
        int maxi=0;
        for(int i=1;i<=n;i++){
            if(even%i==0&&odd%i==0){
                maxi=max(maxi,i);
            }
        }
        return maxi;
    }
};