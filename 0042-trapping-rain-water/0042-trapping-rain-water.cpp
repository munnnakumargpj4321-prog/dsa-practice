class Solution {
public:
    // int leftmaxi(int start,int end,vector<int>& height){
    //     int leftmax=0;
    //     for(int i=start;i<=end;i++){
    //         leftmax=max(leftmax,height[i]);
    //     }
    //     return leftmax;
    // }
    // int rightmaxi(int start,int end,vector<int>& height){
    //     int rightmax=0;
    //     for(int i=end;i>=start;i--){
    //         rightmax=max(rightmax,height[i]);
    //     }
    //     return rightmax;
    // }
    int trap(vector<int>& height) {
        int l=height.size();
        vector<int>leftmax(l,0);
        leftmax[0]=height[0];
        vector<int>rightmax(l,0);
        rightmax[l-1]=height[l-1];
        int count=0;
        for(int i=1;i<l;i++){
            leftmax[i]=max(leftmax[i-1],height[i]);
        }
        for(int i=l-2;i>=0;i--){
            rightmax[i]=max(rightmax[i+1],height[i]);
        }
        for(int i=0;i<l;i++){
            int mini=min(leftmax[i],rightmax[i])-height[i];
            count+=mini;
        }
        return count;
        
    }
};
// first and this is a brute force apporach to solve this question
// class Solution {
// public:
//     int leftmaxi(int start,int end,vector<int>& height){
//         int leftmax=0;
//         for(int i=start;i<=end;i++){
//             leftmax=max(leftmax,height[i]);
//         }
//         return leftmax;
//     }
//     int rightmaxi(int start,int end,vector<int>& height){
//         int rightmax=0;
//         for(int i=end;i>=start;i--){
//             rightmax=max(rightmax,height[i]);
//         }
//         return rightmax;
//     }
//     int trap(vector<int>& height) {
//         int l=height.size();
//         int i=0;
//         int j=l-1;
//         int count=0;
//         // int area=1;
//         for(int i=0;i<l;i++){
//             int left=leftmaxi(0,i,height);
//             int right=rightmaxi(i,l-1,height);
//             int mini=min(left,right)-height[i];
//             count+=mini;
//         }
//         return count;
        
//     }
// };