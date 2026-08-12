class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char>vowel={'a','e','i','o','u'};
        int maxi=0;
        int count=0;
        for(int i=0;i<k;i++){
            if(vowel.find(s[i])!=vowel.end()){
                count++;
            }
        }
        maxi=count;
        for(int i=k;i<s.size();i++){
            if(vowel.find(s[i])!=vowel.end()){
                count++;
            }
            if(vowel.find(s[i-k])!=vowel.end()){
                count--;
            }
            maxi=max(maxi,count);
        }
        return maxi;
    }
};


//===============================================================================================


// class Solution {
// public:
//     int maxVowels(string s, int k) {
//         unordered_set<char>vowel={'a','e','i','o','u'};
//         int maxi=0;
//         for(int i=0;i<=s.size()-k;i++){
//             int count=0;
//             for(int j=i;j<i+k;j++){
//                 if(vowel.find(s[j])!=vowel.end()){
//                     count++;   
//                 }
//             }
//             maxi=max(maxi,count);
//         }
//         return maxi;
//     }
// };