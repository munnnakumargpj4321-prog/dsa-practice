class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>ans;
        int i=0;
        int num=1;
        while(ans.size()<k){
            if(i<arr.size()&&arr[i]==num){
                i++;
            }else{
                ans.push_back(num);
            }
            num++;
        }
        return ans[k-1];
    }
};