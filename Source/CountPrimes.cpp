#include <bitset>
#include <cmath>

namespace LeetCode {
class Solution final {
public:
    [[maybe_unused]] static int getPrimeCount(const int number) {
        if (number < 2) {
            return 0;
        }

        std::bitset<5000001> isPrime {};
        isPrime.set();
        isPrime.reset(0);
        isPrime.reset(1);

        for (auto potentialPrime {2}; true; ++potentialPrime) {
            const auto potentialPrimeSquared {static_cast<long long>(potentialPrime * potentialPrime)};

            if (potentialPrimeSquared >= number) {
                break;
            }

            if (!isPrime[potentialPrime]) {
                continue;
            }

            for (auto multiple {potentialPrimeSquared}; multiple < number; multiple += potentialPrime) {
                isPrime[multiple] = false;
            }
        }

        auto primeCount {0};

        for (auto index {2}; index < number; ++index) {
            if (isPrime[index]) {
                ++primeCount;
            }
        }

        return primeCount;
    }
};
}