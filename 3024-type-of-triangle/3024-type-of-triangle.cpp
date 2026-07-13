class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a=nums[0];
        int b=nums[1];
        int c=nums[2];
        string ans="";
        if(a+b<=c||b+c<=a||a+c<=b){
            ans="none";
            return ans;
        }
        if((a==b&&b==c)){
            ans="equilateral";
            return ans;
        }else if(a==b||b==c||a==c){
            ans="isosceles";
            return ans;
        }else{
            ans="scalene";
            return ans;
        }

        
    }
};