class Solution {
public:
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) {
        int sum1=0;
        int sum2=0;
        int n=nums1.size();
        for(int i=0;i<n;i++){
            sum1+=nums1[i];
            sum2+=nums2[i];
        }
        int maxi1=0;
        int maxi2=0;
        int gain1=0;
        int gain2=0;
        for(int i=0;i<n;i++){
            gain1+=nums2[i]-nums1[i];
            if(gain1<0)gain1=0;
            maxi1=max(maxi1,gain1);
            gain2+=nums1[i]-nums2[i];
            if(gain2<0)gain2=0;
            maxi2=max(maxi2,gain2);
        }
        return max(sum1+maxi1,sum2+maxi2);
    }
};