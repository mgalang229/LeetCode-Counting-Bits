class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n+1);
        for (int i = 0; i <= n; i++) {
            int cnt = 0;
            for (int bit = 0; bit < 32; bit++) {
                if (i & (1 << bit)) {
                    cnt++;
                }
            }
            res[i] = cnt;
        }
        return res;
    }
};
