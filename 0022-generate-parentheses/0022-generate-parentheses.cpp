class Solution {
public:
    void fun(int n,vector<string>&ans,/*vector<string>&temp*/string temp,int idx,int idx2){
        if(temp.size()==n*2){
            ans.push_back(temp);
            return;
        }
        // if(temp.size()==n*2){
        //     return;
        // }
        // for(int i=idx;i<n;i++){
        //     temp+='(';
        //     fun(n,ans,temp,i+1);
        //     temp+=')';
        //     fun(n,ans,temp,i+1);
        // }
        if(idx<n){
            fun(n,ans,temp+'(',idx+1,idx2);
        }
        if(idx2<idx){
            fun(n,ans,temp+')',idx,idx2+1);
        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        // vector<string>temp;
        fun(n,ans,"",0,0);
        return ans;
    }
};