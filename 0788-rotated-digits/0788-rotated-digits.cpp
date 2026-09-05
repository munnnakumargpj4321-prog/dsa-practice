class Solution {
public:
    int rotatedDigits(int n) {
        int ans=0;
        for(int i=1;i<=n;i++){
            int x=i;
            bool first=true;
            bool second=false;
            while(x>0){
                int ls=x%10;
                if(ls==3||ls==4||ls==7){
                    first=false;
                    break;
                }
                if(ls==2||ls==5||ls==6||ls==9){
                    second=true;
                }
                x/=10;
            }
            if(first&&second){
                ans++;
            }

        }
        return ans;
    }
};