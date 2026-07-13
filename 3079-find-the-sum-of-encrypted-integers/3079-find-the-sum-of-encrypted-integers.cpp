class Solution {
public:
    int find(int n){
        int count=0;
        int maxi=0;
        int temp=n;
        while(temp>0){
            int ls=temp%10;
            maxi=max(maxi,ls);
            count++;
            temp/=10;
        }
        int encrypted=0;
        for(int i=0;i<count;i++) {
            encrypted=encrypted*10+maxi;
        }
        return encrypted;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
           sum += find(nums[i]);
        }
        return sum;
        
    }
};