// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int l=height.size();
//         int ans=0;
//         int area;
//         for(int i=0;i<l;i++){
//             for(int j=i+1;j<l;j++){
//                 int weight=j-i;
//                 int ht=min(height[i],height[j]);
//                 area=weight*ht;
//                 ans=max(ans,area);
//             } 
//         }
        
//         return ans;
//     }
// };
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=height.size();
        int ans=0;
        int area;
        int j=l-1;
        int i=0;
        while(i<j){
            int w = j - i ;
            int h=min(height[i], height[j]);
            area=h*w;   
            ans=max(ans,area);
            height[i]<height[j]? i++:j--;
            // height[i]>height[j] i--;
        }
        return ans;
    }
};