class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string s="";
        vector<string>ans;
        for(auto num:nums){
            ans.push_back(to_string(num));
        }
        sort(ans.begin(),ans.end(),[](string a,string b){
            return a+b>b+a;
        });
        if(ans[0]=="0"){
            return "0";
        }
        for( string s2:ans){
            s+=s2;
        }
        return s;

    }
};