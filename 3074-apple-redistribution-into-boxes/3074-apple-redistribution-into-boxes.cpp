class Solution {
public:
    int boxes(vector<int>& capacity,long long  sum1){
        sort(capacity.rbegin(), capacity.rend());

        long long sum2=0;
        int l2= capacity.size();
        int i=0;
        int count=0;
     while (count < capacity.size() && sum2<sum1) {
            sum2 += capacity[count];
            count++;
        }
        return count;
    }
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int l1=apple.size();
        long long sum1=0;
        for(int i=0;i<l1;i++){
            sum1+=apple[i];
        }
        int result=boxes(capacity,sum1);
        return result;
    }
};