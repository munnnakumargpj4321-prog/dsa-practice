class Solution {
public:
    string countAndSay(int n) {
        string ans="1";
        while(n>1){
            string temp=ans;
            int i=0;
            string temp2="";
            while(i<ans.size()){
                int count=1;
                char ch=temp[i];
                int j=i+1;
                while(j<ans.size()&&temp[j]==ch){
                    count++;
                    j++;
                }
                i=j;
                temp2+=to_string(count)+ch;
            }
            ans=temp2;
            n--;
        }
        return ans;
    }
};