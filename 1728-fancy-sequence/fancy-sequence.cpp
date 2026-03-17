#include <vector>

using namespace std;

class Fancy {
    long long add = 0, mul = 1;
    vector<long long> nums;
    const int MOD = 1e9 + 7;

    // Fast Power to find Modular Inverse (Fermat's Little Theorem)
    long long power(long long base, long long exp) {
        long long res = 1;
        base %= MOD;
        while (exp > 0) {
            if (exp % 2 == 1) res = (res * base) % MOD;
            base = (base * base) % MOD;
            exp /= 2;
        }
        return res;
    }

    long long modInverse(long long n) {
        return power(n, MOD - 2);
    }

public:
    Fancy() {}

    void append(int val) {
        // Reverse the current 'mul' and 'add' before storing
        long long x = (val - add + MOD) % MOD;
        nums.push_back((x * modInverse(mul)) % MOD);
    }

    void addAll(int inc) {
        add = (add + inc) % MOD;
    }

    void multAll(int m) {
        add = (add * m) % MOD;
        mul = (mul * m) % MOD;
    }

    int getIndex(int idx) {
        if (idx >= nums.size()) return -1;
        // Re-apply the current transformations
        return (nums[idx] * mul + add) % MOD;
    }
};