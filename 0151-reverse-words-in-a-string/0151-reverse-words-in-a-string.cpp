class Solution {
public:
    string reverseWords(string s) {
    reverse(s.begin(),s.end());
    int l= s.size();
    string ans;
    for(int i=0;i<l;i++){
        string word;
        while(i<l&&s[i]!=' '){
            word+=s[i];
            i++;
        }
    reverse(word.begin(),word.end());
    if(word.length()>0){
        ans+=' '+word;

    }  
    }
      return ans.substr(1);
        
    }
};