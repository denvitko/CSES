#include <iostream>

int main() {

    int n{};
    std::cin >> n;

    if(n == 1) {
        std::cout << 1;
    } else if(n < 4) {
        std::cout << "NO SOLUTION";
    } else {
        for (int i = 1; i < n; i+=2) {
            std::cout << i+1 << " ";
        }
        for (int i = 0; i < n; i+=2) {
            std::cout << i+1 << " ";
        }
    }

    return 0;
}
