#include <iostream>

typedef long long int ll;

int main() {

    int t{};
    int y{}, x{};

    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        std::cin >> y >> x;
        ll z = std::max(y, x);
        ll z2 = z * z;
        ll ans{};

        if (z & 1) {
            if (y == z) {
                ans = z2 - 2*y + 1 + x;
            } else if (x == z) {
                ans = z2 + 1 - y;
            }
        } else {
            if (x == z) {
                ans = z2 - 2*x + 1 + y;
            } else if (y == z) {
                ans = z2 + 1 - x;
            }
        }
        std::cout << ans << std::endl;
    }
    return 0;
}
