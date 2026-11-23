class ProductOfNumbers {
    vector<int>ans;
public:
    ProductOfNumbers() {
        ans.push_back(1);
    }
    
    void add(int num) {
        // ans.push_back(num);
        if(num==0){
            ans.clear();
            ans.push_back(1);
        }else{
            ans.push_back(ans.back()*num);
        }
    }
    
    int getProduct(int k) {
        // long long mul=1;
        // for(int i=ans.size()-1;i>=ans.size()-k;i--){
            // mul*=ans[i];
        // }
        if(k>=ans.size())return 0;

        return ans.back()/ans[ans.size()-k-1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */