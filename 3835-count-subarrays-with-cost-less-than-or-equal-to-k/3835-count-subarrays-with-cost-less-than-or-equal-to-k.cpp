class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long count=0;
        int i=0;
        int j=0;
        deque<int>dq1;
        deque<int>dq2;
        while(i<nums.size()){
            while(!dq1.empty()&&nums[dq1.back()]<nums[i]){
                dq1.pop_back();
            }
            dq1.push_back(i);
            while(!dq2.empty()&&nums[dq2.back()]>nums[i]){
                dq2.pop_back();
            }
            dq2.push_back(i);
            while(1LL*(nums[dq1.front()]-nums[dq2.front()])*((i-j)+1)>k){
                if(dq1.front()==j){
                    dq1.pop_front();
                }
                if(dq2.front()==j){
                    dq2.pop_front();
                }
                j++;
            }
            count+=i-j+1;
            i++;
        }
        return count;
    }
};



// class Solution {
// public:
//     long long countSubarrays(vector<int>& nums, long long k) {
//         long long count=0;
//         for(int i=0;i<nums.size();i++){
//             for(int j=i;j<nums.size();j++){
//                 long long maxi=*max_element(nums.begin()+i,nums.begin()+j+1);
//                 long long mini=*min_element(nums.begin()+i,nums.begin()+j+1);
//                 long long cost=(j-i)+1;
//                 long long temp=1LL*(maxi-mini)*cost;
//                 if(temp<=k)count++;
//             }
//         }
//         return count;
//     }
// };