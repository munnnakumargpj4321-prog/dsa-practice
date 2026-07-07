class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        string answer="";
        while(i<word1.size()&&i<word2.size()){
            answer.push_back(word1[i]);
            answer.push_back(word2[i]);
            i++;
        }
        while(i<word1.size()){
            answer.push_back(word1[i]);
            i++;
        }
        while(i<word2.size()){
            answer.push_back(word2[i]);
            i++;
        }
        return answer;
    }
};
