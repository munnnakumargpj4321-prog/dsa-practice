class Solution {
public:
    bool canAliceWin(int n) {
        // int alice=10;
        // int bob=9;
        // if(n<alice)return false;
        // // bool ans=true;
        // while(n>0){
        //     int temp=n-alice;
        //     temp=n-bob;
        //     alice-=2;
        //     bob-=2;
        //     if(n<alice&&n<bob)break;
        // }
        // return (n%2==0)?true:false;
        // return n>=10&&n%2==0;
        int total=10;
        while(n>=total){
            n-=total;
            total--;
        }
        return total%2==1;
    }
};