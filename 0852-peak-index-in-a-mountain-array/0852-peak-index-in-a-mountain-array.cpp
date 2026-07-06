class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=arr.size();
        int s=1,e=l-2;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid-1]<arr[mid]&&arr[mid]>arr[mid+1]){
                return mid;
            }
            if(arr[mid-1]<arr[mid]/*&&arr[mid]<arr[mid+1]*/){
                s=mid+1;
            }else/*&&arr[mid]<arr[mid+1]*/{
                e=mid-1;
            }
            // if(i==0||i==l-1)return 
           
        }
        return  -1;
      
        
    }
};
// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int l=arr.size();
//         for(int i=1;i<l;i++){
//             if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
//                 return i;
//             }
//         }
//         return -1;
        
//     }
// };