class Solution {
public:
    const int MOD = 1e9 + 7;

    long long power(long long x, long long y) {
        long long res = 1;
        x = x % MOD;
        while (y > 0) {
            if (y % 2 == 1) {
                res = (res * x) % MOD;
            }
            x = (x * x) % MOD;
            y = y / 2;
        }
        return res;
    }

    int countGoodNumbers(long long n) {
        long long evenPositions = (n + 1) / 2;  // ceil(n/2)
        long long oddPositions = n / 2;         // floor(n/2)

        long long result = (power(5, evenPositions) * power(4, oddPositions)) % MOD;
        return result;
    }
};
