#include <iostream>

typedef long long ll;

int main() {
    int n{};
    std::cin >> n;

    ll res{};

    for (ll i = 5; i <= n; i*=5) {
        res+=n/i;
    }

    std::cout << res << std::endl;
    return 0;
}
