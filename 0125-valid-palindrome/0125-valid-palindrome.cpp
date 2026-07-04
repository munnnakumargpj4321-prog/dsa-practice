// class Solution {
// public:
//     bool isPalindrome(string s) {
//         if(s==" ") return true; 
//         string result;
//         for(auto st:s){
//             if(isalnum(st)){
//                 result+=tolower(st);
//             }
//         }   
//         string reversed=result;
//         reverse(reversed.begin(),reversed.end());

//     return result==reversed;
//     }
// };


// both are equeal the below one is optimize and it is also solved by to pointer so this is good 

class Solution {
public:
    bool isPalindrome(string s) {
        if(s==" ") return true; 
        int l=s.size();
        int left=0,right=l-1;
        while(left<right){
            while(left<right && ! isalnum(s[left]))left ++; 
            while(left<right && ! isalnum(s[right]))right--;
            if(tolower(s[left])!=tolower(s[right]))return false;
            left++;
            right--; 
        }
        return true;
   
    }
};



