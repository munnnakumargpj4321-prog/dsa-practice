class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int l=arr.size();
        if(l<3)return false;
        for(int i=0;i+2<l;i++){
            if((arr[i]&1)&&(arr[i+1]&1)&&(arr[i+2]&1)){
                return true;
            }
        }
        return false;
    }
};