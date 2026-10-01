class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {
     long long count=1;
    //  long long i;
     const int modulo=1000000007;
     long long lcm=1LL* a/gcd(a,b)*b;
     long long x=1;
    long long y=1LL*n*min(a,b);
     while(x<y){
        // if(i%a==0||i%b==0){
        //     count++;
        // // }
        // if(x<y){
        //     i=x;
        //     x+=a;
        //     count++;
        // }else if(y<x){
        //     i=y;
        //     y+=b;
        //     count++;
        // }else{
        //     i=x;
        //     x+=a;
        //     y+=b;
        //     count++;
        // }
        // if(count==n){
        //     return i%modulo;
        // }
        // i++;
        long long mid=x+(y-x)/2;
        count=mid/a+mid/b-mid/lcm;
        if(count>=n){
            y=mid;
        }else{
            x=mid+1;
        }
     }   
     return x%modulo;
    }
};