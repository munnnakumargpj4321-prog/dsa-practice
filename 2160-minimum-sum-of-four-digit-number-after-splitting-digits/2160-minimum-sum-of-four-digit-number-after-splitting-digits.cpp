class Solution {
public:
    int minimumSum(int num) {
        vector<int>ans;
        while(num){
            ans.push_back(num%10);
            num/=10;
        }
        sort(ans.begin(),ans.end());
        long long first=ans[0]*10 +ans[2];
        long long second=ans[1]*10 +ans[3];
        return first+second;
    }
};