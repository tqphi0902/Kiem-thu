#include <iostream>
#include <vector>
#include <cassert>

bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int sum_of_primes(const std::vector<int>& numbers, int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (is_prime(numbers[i])) {
            sum += numbers[i];
        }
    }
    return sum;
}

void test_sum_of_primes() {
    // Test case for empty vector
    std::vector<int> empty;
    assert(sum_of_primes(empty, 0) == 0);

    // Test case for vector with only primes
    std::vector<int> primes_only = {2, 3, 5, 7, 11};
    assert(sum_of_primes(primes_only, 5) == 28);

    // Test case for vector with non-prime and prime numbers
    std::vector<int> mixed = {1, 4, 6, 8, 9, 10, 12};
    assert(sum_of_primes(mixed, 7) == 0);

    // Test case for vector with all non-prime numbers
    std::vector<int> non_primes_only = {1, 4, 6, 8, 9, 10, 12};
    assert(sum_of_primes(non_primes_only, 7) == 0);

    // Test case for vector with negative numbers
    std::vector<int> negatives = {-2, -3, -5, -7, -11};
    assert(sum_of_primes(negatives, 5) == 0);

    // Test case for vector with a mix of negative and positive prime numbers
    std::vector<int> mixed_negatives = {-2, -3, 2, 3, -5, -7, 5, 7};
    assert(sum_of_primes(mixed_negatives, 8) == 17);

    // Test case for vector with a single negative prime number
    std::vector<int> single_negative_prime = {-2};
    assert(sum_of_primes(single_negative_prime, 1) == 0);

    // Test case for vector with a single positive prime number
    std::vector<int> single_positive_prime = {19};
    assert(sum_of_primes(single_positive_prime, 1) == 19);

    // Test case for vector with large prime numbers
    std::vector<int> large_primes = {999983, 999979, 999961};
    assert(sum_of_primes(large_primes, 3) == 2999923);

    std::cout << "All test cases passed successfully!" << std::endl;
}

int main() {
    test_sum_of_primes();
    return 0;
}
