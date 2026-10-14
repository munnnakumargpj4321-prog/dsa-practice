class Solution {
public:
    // int sum(string s){
    //     int sum=0;
    //     for(auto val: s ){
    //         sum+=val-'0';
    //     }
    //     return sum;
    // }
    // int digit(int n){
    //     int temp=0;
    //     while(n>0){
    //         int ls=n%10;
    //         temp+=ls*ls;
    //         n/=10;
    //     }
    //     return temp;
    // }
    string maxSumOfSquares(int num, int sum) {
        // vector<int>ans;
    //    for(int i=1;i<=sum/2;i++){
    //         for(int j=1;j<=sum/2;j++){
    //             if(i+j==sum){
    //                 ans.push_back(i+j);
    //             }
    //         }
    //    }
    if(sum>(9*num))return "";
        string result="";
        // int maxi=0;
        for(int i=0;i<num;i++){
            // int temp=(digit(val));
            // if(temp>maxi){
                // maxi=temp;
            int val=min(9,sum);
            result+=to_string(val);
            sum-=val;
            // }
        }
        if(sum>0)return "";
        return result;
    }
};
// class Solution {
// public:
//     // int sum(string s){
//     //     int sum=0;
//     //     for(auto val: s ){
//     //         sum+=val-'0';
//     //     }
//     //     return sum;
//     // }
//     int digit(int n){
//         int temp=0;
//         while(n>0){
//             int ls=n%10;
//             temp+=ls*ls;
//             n/=10;
//         }
//         return temp;
//     }
//     string maxSumOfSquares(int num, int sum) {
//         vector<int>ans;
//        for(int i=1;i<=sum/2;i++){
//             for(int j=1;j<=sum/2;j++){
//                 if(i+j==sum){
//                     ans.push_back(i+j);
//                 }
//             }
//        }
//         string result="";
//         int maxi=0;
//         for(auto val:ans){
//             int temp=(digit(val));
//             if(temp>maxi){
//                 maxi=temp;
//                 result=to_string(val);
//             }
//         }
//         return result;
//     }
// };