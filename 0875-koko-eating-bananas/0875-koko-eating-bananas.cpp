class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int a=1;
        int b=*max_element(piles.begin(),piles.end());
       
        while(a<b){
            int mid=a+(b-a)/2;
             int fakehour=0;
            for(int i=0;i<piles.size();i++){
                fakehour+=(piles[i]+mid-1)/mid;
            }
            if(fakehour<=h){
                b=mid;
            }else{
                a=mid+1;
            }
        }
        return a;   
    }
};