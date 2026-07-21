class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int idx=-1;
        int l=arr.size();
        for(int i=l-1;i>=0;i--){
            int current=arr[i];
            arr[i]=idx;
            idx=max(idx,current);
        }
        return arr;
    }
};