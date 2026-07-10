class Solution {
public:
    bool isposible(vector<int>&position, long long mid,int m){
        int ball=1;
        long long force=position[0];
        for(int i=0;i<position.size();i++){
            if((position[i]-force)>=mid){
                ball++;
                force=position[i];
            }
            if(ball>=m){
                return true;
            }

        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        long long low = 0; 
        long long high = position.back() - position.front();
        long long ans = 0;
        high=high-low;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(isposible(position,mid,m)){
                ans=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans;
        
    }
};