class Solution {
public:
    int check(int num){
        int num2=0;
        while(num>0){
            int ls=num%10;
            num2+=(ls*ls);
            num/=10;
        }
        return num2;
    }
    bool isHappy(int n) {
        int num=0;
        int temp=n;
        while(temp!=0){
            int result=check(temp);
            if(result==1)return true;
            if(result==4)return false;
            temp=result;
        }
        return false;
    }
};