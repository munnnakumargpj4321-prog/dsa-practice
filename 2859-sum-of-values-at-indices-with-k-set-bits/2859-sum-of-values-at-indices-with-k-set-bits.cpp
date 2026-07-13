class Solution {
public:
    int count1(int number){
        int count=0;
        while(number>0){
            count=count+number%2;
            number/=2;
        }
        return count;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum=0;
        int l=nums.size();
        for(int i=0;i<l;i++){
            if(count1(i)==k){
                sum+=nums[i];
            }
        }
        return sum;


    }
};