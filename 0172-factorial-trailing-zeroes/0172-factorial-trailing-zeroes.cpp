class Solution {
public:
    int trailingZeroes(int n) {
        if(n==0)return 0;
        return (n/5)+trailingZeroes(n/5);
    }
};





// class Solution {
// public:
//     int trailingZeroes(int n) {
//       if(n%5!=0)return 0;
//       int ans=0;
//       if(n>0){
//         ans++;
//       }
//     trailingZeroes(n/5);
//     return ans;
//     }
// };
// class Solution {
// public:
//     int trailingZeroes(int n) {
//         int ans=0;
//         while(n>0){
//             n/=5;
//             ans+=n;
//         }
//         return ans;
//     }
// };