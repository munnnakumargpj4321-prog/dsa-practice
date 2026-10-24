class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        // vector<int>temp;
        int ans=0;
        int n=citations.size();
        for(int i=0;i<citations.size();i++){
            // temp.push_back(citations[i]);
            // int size=temp.size();
            int value=citations[i];
            int count=n-i;
            if(value>=count){
                ans=max(ans,count);
            }
        }
        return ans;
    }
};