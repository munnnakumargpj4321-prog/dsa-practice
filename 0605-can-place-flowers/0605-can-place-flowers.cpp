 class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for (int i = 0; i < flowerbed.size(); i++) {

            if (flowerbed[i] == 0) {

                bool left = (i == 0 || flowerbed[i - 1] == 0);
                bool right = (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0);

                if (left && right) {
                    n--;
                    flowerbed[i] = 1;
                }
            }
        }

        return n <= 0;
    }
};
// this is mot equal

// for(int i=0;i<l;i++){
// and the best part      and this if( furst )
// }