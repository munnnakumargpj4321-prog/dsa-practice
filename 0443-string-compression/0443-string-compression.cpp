class Solution {
public:
    int compress(vector<char>& chars) {
        int idx=0;
        for(int i=0;i<chars.size();i++){
            int count=0;
            char char1=chars[i];
            while(i<chars.size()&&chars[i]==char1){
                count++;
                i++;
            }
            if(count==1){
                chars[idx++]=char1;
            }
            if(count>1){
                chars[idx++]=char1;
                string str=to_string(count);
                for(auto str2:str){
                    chars[idx++]=str2;
                }
            }
            i--;
        }
        return idx;
    }
};