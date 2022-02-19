#include <iostream>

int main() {
    int mx{0};
    int act{1};
    std::string s{};
    getline(std::cin, s);
    for (int i = 1; i < s.length(); ++i) {
        if(s[i]!=s[i-1]) {
            mx = std::max(act, mx);
            act = 1;
        } else {
            act++;
        }
    }

    std::cout << std::max(act, mx);
    return 0;
}
