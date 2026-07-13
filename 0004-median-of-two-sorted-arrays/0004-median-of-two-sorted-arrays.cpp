class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int l1=nums1.size();
        int l2=nums2.size();
        vector<int>ans;
        for(int i=0;i<l1;i++){
            ans.push_back(nums1[i]);
        }
        for(int i=0;i<l2;i++){
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(),ans.end());
        int n=ans.size();
        if(n%2==1) {
            return ans[n/2];
        } else{
            return(ans[n/2-1]+ans[n/2]) / 2.0;
        }
    }
};