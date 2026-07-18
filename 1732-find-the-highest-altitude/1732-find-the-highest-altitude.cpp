class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int l=gain.size();
        int prifix=0;
        int maxi=0;
        for(int i=0;i<l;i++){
            prifix = prifix + gain[i];
            maxi=max(maxi,prifix);
        }
        return maxi;
    }
};