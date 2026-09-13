class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int maxi=0;
        int mini=arrays[0][0];
        int maxi2=arrays[0][arrays[0].size()-1];
        for(int i=1;i<arrays.size();i++){
            int mini2=arrays[i][0];
            int maxi3=arrays[i][arrays[i].size()-1];
            int rusult=max(abs(mini-maxi3),abs(maxi2-mini2));
            maxi=max(maxi,rusult);
            mini = min(mini, mini2);
            maxi2 = max(maxi2, maxi3);
            
        }
        return maxi;
    }
};