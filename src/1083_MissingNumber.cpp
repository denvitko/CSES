#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n{};
    std::cin >> n;
    std::vector<int> nums(n-1);
    for(auto &i : nums) {
        std::cin >> i;
    }

    sort(nums.begin(), nums.end());

    for(int i = 0; i < n; ++i) {
       if(nums[i]!=(i+1)) {
           std::cout << i+1;
           return 0;
       }
    }
    return 0;
}
