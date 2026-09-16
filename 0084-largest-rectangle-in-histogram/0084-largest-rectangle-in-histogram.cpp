class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int>st;
        vector<int>right(n,0);
        for(int i=n-1;i>=0;i--){
            while(!st.empty()){
                if(heights[st.top()] >= heights[i]){
                    st.pop();
                }else{
                    break;
                }
                
            }
            right[i]=st.empty()?n:st.top();
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
        vector<int>left(n,0);
        for(int i=0;i<n;i++){
            while(!st.empty()){
                if(heights[st.top()]>=heights[i]){
                    st.pop();
                }else{
                    break;
                }
            }
            left[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int width=right[i]-left[i]-1;
            int area=heights[i]*width;
            ans=max(ans,area);
        }
        return ans;

    }

};

// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
//         int maxi=0;
//         for(int i=0;i<heights.size();i++){
//             int height=heights[i];
//             for(int j=i;j<heights.size();j++){
//                 height=min(height,heights[j]);
//                 int weigth=j-i+1;
//                 maxi=max(maxi,height*weigth);

//             }
//         }
//         return maxi;
//     }
// };