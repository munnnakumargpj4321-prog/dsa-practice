class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum1=0;
        int sum2=0;
        int start=0;
        int tank=0;
        for(int i=0;i<gas.size();i++){
            sum1+=gas[i];
            sum2+=cost[i];
            tank+=gas[i]-cost[i];
            if(tank<0){
                tank=0;
                start=i+1;
            }
        }
        return(sum1<sum2)?-1:start;
        
    }
};