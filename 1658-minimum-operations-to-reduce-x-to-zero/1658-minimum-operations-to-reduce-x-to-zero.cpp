class Solution {
public:
    void prifixsum(vector<int>&prifix,vector<int>&nums){
        int sum=0;
        for(auto val:nums){
            sum+=val;
            prifix.push_back(sum);
        }
    }
    void suffixsum(vector<int>&suffix,vector<int>&nums){
        int sum=0;
        for(int i=nums.size()-1;i>=0;i--){
            sum+=nums[i];
            suffix.push_back(sum);
        }
    }
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        vector<int>prifix;
        prifixsum(prifix,nums);
        vector<int>suffix;
        suffixsum(suffix,nums);
        int answer=INT_MAX;
        for(int i=0;i<prifix.size();i++){
           if(prifix[i]==x){
            answer=min(answer,i+1);
           }
        }
        for(int i=0;i<suffix.size();i++){
           if(suffix[i]==x){
            answer=min(answer,i+1);
           }
        }
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp.find(suffix[i])==mp.end()){
                mp[suffix[i]]=i+1;
            }
        }
        for(int i=0;i<n;i++){
            int leftsum=prifix[i];
            int temp2=x-leftsum;
            if(mp.find(temp2)!=mp.end()){
                int rightcount=mp[temp2];
                int leftcount=i+1;
                if(leftcount+rightcount<=n){
                    answer=min(answer,rightcount+leftcount);
                }
            }
        }
        if(answer==INT_MAX){
            return -1;
        }
        return answer;

    }
};