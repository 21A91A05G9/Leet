class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int c = 0, f = 0;
        if (flowerbed.size() == 1 and flowerbed[0] == 0)
            return true;
        for (int i = 0; i < flowerbed.size(); i++) {
            if (flowerbed[i] == 0) {
                if (i == 0 or i == (flowerbed.size() - 1)) {
                    f += 1;
                }
                c += 1;
            }

            else {
                n -= (c / 2);
                if (c % 2 == 0 and c != 0 and f == 0)
                    n += 1;
                c = 0;
                f = 0;
            }
        }

        n -= (c / 2);
        if (c % 2 == 1 and f >= 2 and flowerbed.size() >= 3)
            n -= 1;
        if (c % 2 == 0 and c != 0 and f == 0)
            n += 1;

        if (n <= 0)
            return true;
        else
            return false;
    }
};
