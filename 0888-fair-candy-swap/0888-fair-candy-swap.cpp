class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        sort(aliceSizes.begin(),aliceSizes.end());
        sort(bobSizes.begin(),bobSizes.end());
        int sum1=0,sum2=0;
        for(auto alice:aliceSizes){
            sum1+=alice;
        }
        for(auto bob:bobSizes){
            sum2+=bob;
        }
        int diff=(sum2-sum1)/2;
        for(auto alice:aliceSizes){
            for(auto bob:bobSizes){
                if((bob-alice)==diff){
                    return {alice,bob};
                }
            }
        }
        return {};

    }
};