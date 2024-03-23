#include <iostream>
#include <vector>

// Hàm kiểm tra xem một số có phải là số nguyên tố hay không
bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Hàm tính tổng của các số nguyên tố trong một dãy số
int sum_of_primes(const std::vector<int>& numbers, int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (is_prime(numbers[i])) {
            sum += numbers[i];
        }
    }
    return sum;
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    std::vector<int> numbers(n);
    std::cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    int prime_sum = sum_of_primes(numbers, n);
    std::cout << "Sum of prime numbers in the array: " << prime_sum << std::endl;

    return 0;
}
