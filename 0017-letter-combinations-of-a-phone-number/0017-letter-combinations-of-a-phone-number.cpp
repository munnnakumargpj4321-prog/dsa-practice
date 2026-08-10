class Solution {
public:
    void valid(unordered_map<int, string>&ans1,vector<string>&ans2,string result,string digits){
        if(digits.size()==0){
            ans2.push_back(result);
            return;
        }
        int i=0;
        int num=digits[i]-'0';
        if(ans1.find(num)!=ans1.end()){
            string part=ans1[num];
            for(int j=0;j<part.size();j++){
                result.push_back(part[j]);
                valid(ans1,ans2,result,digits.substr(1));
                result.pop_back();
            }
        }
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<int, string> ams1{{2, "abc"}, {3, "def"}, {4, "ghi"},{5, "jkl"}, {6, "mno"}, {7, "pqrs"},
            {8, "tuv"}, {9, "wxyz"}
        };
        vector<string> ans2;
        string result="";
        if(digits.empty()){
            return ans2;
        }
        valid(ams1, ans2, result, digits);
        return ans2;
    }
};
