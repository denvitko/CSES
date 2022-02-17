#include <iostream>
#include <vector>

int main() {
    int n{};
    std::cin >> n;
    std::vector<int> nums(n);
    for(auto &i : nums) {
        std::cin >> i;
    }

    long int result{};

    for (int i = 1; i < n; ++i) {
        if(nums[i] < nums[i-1]) {
            result += (nums[i-1]-nums[i]);
            nums[i] += (nums[i-1]-nums[i]);
        }
    }

    std::cout << result << std::endl;
    return 0;
}
