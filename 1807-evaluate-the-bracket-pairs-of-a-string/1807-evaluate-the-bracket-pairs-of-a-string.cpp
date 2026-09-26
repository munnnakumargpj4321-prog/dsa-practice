class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>mp;
        for(int i=0;i<knowledge.size();i++){
            mp.insert({knowledge[i][0],knowledge[i][1]});
        }
        string s2="";
        int i=0;
        while(i<s.size()){
            while(i<s.size()&&s[i]!='('){
                s2+=s[i];
                i++;
            }
            string temp="";
            if(i<s.size()&&s[i]=='('){
                i++;
                while(i<s.size()&&s[i]!=')'){
                    temp+=s[i];
                    i++;
                }
            }
            if(!temp.empty()&&mp.find(temp)!=mp.end()){
                s2+=mp[temp];
            }else if(!temp.empty()&&mp.find(temp)==mp.end()){
                s2+='?';
            }
            i++;

        }
    return s2;
    }
};