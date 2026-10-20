class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        long long count = 0;
        int i=0;
        int j=0;
        deque<int>dq;
        deque<int>dq2;
        while(j<nums.size()){
            while(!dq.empty()&&nums[dq.back()]<nums[j]){// max element
                dq.pop_back();
            }
            dq.push_back(j);
            while(!dq2.empty()&&nums[dq2.back()]>nums[j]){// min element
                dq2.pop_back();
            }
            dq2.push_back(j);
            while(nums[dq.front()]-nums[dq2.front()]>2){
                if(dq.front()==i){
                    dq.pop_front();
                }
                if(dq2.front()==i){
                    dq2.pop_front();
                }
                i++;
            }
            count+=j-i+1;
            j++;
        }
        return count;
    }
};
// class Solution {
// public:
//     long long continuousSubarrays(vector<int>& nums) {
//         long long count = 0;
//         for (int i=0;i<nums.size();i++){
//             for (int j=i;j<nums.size();j++){
//                 long long maxi=*max_element(nums.begin()+i,nums.begin()+j+1);
//                 long long mini=*min_element(nums.begin()+i,nums.begin()+j+1);
//                 if(maxi-mini<=2){
//                     count++;
//                 }
//             }
//         }

//         return count;
//     }
// };