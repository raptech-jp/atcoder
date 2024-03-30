#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, k;
    std::cin >> n >> k;

    std::vector<int> a;

    for (int i = 0; i < n; ++i) {
        int tmp;
        std::cin >> tmp;
        if (tmp % k == 0) {
            a.push_back(tmp / k);
        }
    }

    std::sort(a.begin(), a.end());

    for (int num : a) {
        std::cout << num << " ";
    }
    
    return 0;
}
