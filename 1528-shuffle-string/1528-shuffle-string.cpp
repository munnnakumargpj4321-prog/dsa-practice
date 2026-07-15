class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string result=s;
        for(int i=0;i<indices.size();i++){
            int idx=indices[i];
            result[idx]=s[i];
        }
        return result;
        
    }
};