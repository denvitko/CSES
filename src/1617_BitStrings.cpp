#include <iostream>

typedef long long ll;

int main() {
    int n{};
    std::cin >> n;

    ll res{2};

    for (int i = 1; i < n; ++i) {
        res *= 2;
        res %= 1000000007;
    }

    std::cout << res << std::endl;
    return 0;
}
