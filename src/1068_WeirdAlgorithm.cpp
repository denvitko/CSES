#include <iostream>

int main() {
    long int n{};
    std::cin >> n;
    std::cout << n << " ";
    while (n != 1) {
        n = ((n&1) == 0) ? (n/2) : (3*n + 1);
        std::cout << n << " ";
    }
    return 0;
}
