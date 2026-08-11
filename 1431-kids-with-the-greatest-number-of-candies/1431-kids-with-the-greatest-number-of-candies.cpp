class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int l=candies.size();
        vector<bool>result;
        int maxi=0;
        for(int i=0;i<l;i++){
              maxi=max(maxi,candies[i]);
        }
        for(int i=0;i<l;i++){
            if((candies[i]+extraCandies)>=maxi){
                result.push_back(true);
            }else{
                result.push_back(false);
            }
        }
        return result;
        
    }
};