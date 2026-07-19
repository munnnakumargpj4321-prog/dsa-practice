class Solution {
public:
    int countPrimes(int n) {
        if (n==0||n==1)return 0;
        int count=0;
        vector<bool>ans(n+1,true);
        for(int i=2;i<n;i++){
            if(ans[i]){
                count++;
                for(int j=i*2;j<n;j=j+i){
                    ans[j]=false;
                }
            }
        } 
        // for(int i=2;i<n;i++){
        //     if(ans[i]){
        //         count++;
        //     }
        // }
    return count;
    }
};