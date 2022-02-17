#include <iostream>

typedef long long ll;

int main() {

    int n{};
    std::cin >> n;

    for (int k = 1; k <= n; ++k) {
        ll a = k*k; ll p = a*(a-1)/2;
        if(k > 2) {
            p-=2*(k-1)*(k-2)+2*(k-2)*(k-1);
        }
        std::cout << p << std::endl;
    }

    return 0;
}
