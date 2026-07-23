class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n=nums.size();
        if(n<=2)return n;
        int count=1;
        while(count<=n){
            count=count*2;
          
        }
        return count;
    }
};