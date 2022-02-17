#include <iostream>

int main() {

    int n{};
    std::cin >> n;

    if((n+1)%4 && n%4) {
        std::cout << "NO" << std::endl;
    } else {
        std::cout << "YES" << std::endl;

        if(n%2==0) {
            std::cout << n/2 << std::endl;
            for (int i = 1; i <= n/2; i+=2) {
                std::cout << i << " ";
            }
            for (int i = n/2+2; i <= n; i+=2) {
                std::cout << i << " ";
            }
        } else {
            std::cout << (n+1)/2 << std::endl;
            for (int i = 1; i <= n/2; i+=2) {
                std::cout << i << " ";
            }
            for (int i = n/2+1; i <= n; i+=2) {
                std::cout << i << " ";
            }
        }

        std::cout << std::endl;

        if(n%2==0) {
            std::cout << n/2 << std::endl;
            for (int i = 2; i <= n/2; i+=2) {
                std::cout << i << " ";
            }

            for (int i = n/2+1; i <= n; i+=2) {
                std::cout << i << " ";
            }
        } else {
            std::cout << (n-1)/2 << std::endl;
            for (int i = 2; i <= n/2; i+=2) {
                std::cout << i << " ";
            }

            for (int i = n/2+2; i <= n; i+=2) {
                std::cout << i << " ";
            }
        }
    }


    return 0;
}
