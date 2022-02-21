#include <iostream>

int main() {
    int t{};
    std::cin >> t;

    int a{}, b{};

    for (int i = 0; i < t; ++i) {
        std::cin >> a >> b;
        std::cout << (((a+b)%3==0 && 2*a>=b && 2*b>=a) ? "YES" : "NO") << std::endl;
    }

    return 0;
}
