class Solution {
public:
    bool stoneGame(vector<int>& piles) {
     int alice=0;
     int bob=0;
     int n=piles.size();
     int s=0;
     int e=n-1;
     while(s<e){
        if(piles[s]>piles[e]){
            alice+=piles[s];
            bob+=piles[e];
        }else{
            alice+=piles[e];
            bob+=piles[s];
        }
        s++;
        e--;
     }   
     return (alice>bob);
    }
};