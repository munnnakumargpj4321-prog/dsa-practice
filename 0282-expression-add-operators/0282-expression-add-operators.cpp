class Solution {
public:
    void valid(string num,int target,string ans,vector<string>&ans2,long long value,long long prev){
        if(num.size()==0){
            if(value==target){
                ans2.push_back(ans);
            }
            return;
        }
        long long current=0;
        for(int i=0;i<num.size();i++){
            current=current*10+num[i]-'0';
            if(i>0&&num[0]=='0'){
                break;
            }
            string part=num.substr(0,i+1);
            string remaining=num.substr(i+1);
            if(ans.empty()){
                valid(remaining,target,part,ans2,current,current);
               
            }else{
                valid(remaining,target,ans+"+"+part,ans2,value+current,current);
                valid(remaining,target,ans+"-"+part,ans2,value-current,-current);
                valid(remaining,target,ans+"*"+part,ans2,value-prev+prev*current,prev*current);
            }
            
        }
    }
    vector<string> addOperators(string num, int target) {
    string ans="";
    vector<string>ans2;
    valid(num,target,ans,ans2,0,0);
    return ans2;
    }
};