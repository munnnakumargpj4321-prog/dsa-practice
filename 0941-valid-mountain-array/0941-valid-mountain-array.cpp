class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)return false;
        int i=0;
        int l=arr.size();
        while(i+1<l&&arr[i]<arr[i+1]){
            i++;
        }
        if(i==0||i==l-1)return false;
        while(i+1<l&&arr[i]>arr[i+1]){
            i++;
        }

    return i==l-1;
    }
};
// class Solution {
// public:
//     bool validMountainArray(vector<int>& arr) {
//         if(arr.size()<3)return false;
//         int i=0;
//         int j=1;
//         int idx=0;
//         while(i<j){
//             if(arr[i]>arr[j]){   
//                 idx=i;
//             }
//             if(arr[idx]>arr[j]){
//                 return  true;
//             }
//             if(arr[i]==arr[j]){
//                 return false;
//             }
//             i++;
//             j++;
//         }
//     return true;
//     }
// };