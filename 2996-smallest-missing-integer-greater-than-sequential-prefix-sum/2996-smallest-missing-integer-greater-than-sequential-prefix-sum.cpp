class Solution {
public:
    int missingInteger(vector<int>& nums) {
     int prifix=nums[0];
     int n=nums.size();   
    for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]+1){
            prifix+=nums[i];
        }else{
            break;
        }
    }
    int ans=prifix;
    while(true){
        bool find=false;
        for(int i=0;i<n;i++){
            if(ans==nums[i]){ 
                find =true;
                break;
              
            }
        }
        if(!find){
            return ans;
        }
        ans++;
    }

    }
};