#include <iostream>
#include <vector>

bool check(const std::vector<int> &d, int a, int b) {
    for (size_t i = 0; i < d.size(); i++) {
        int day = d[i] % (a + b);
        if (day != 0 && day < a)
            return true;
    }
    return false;
}

int main() {
    size_t n;
    int a, b;
    std::cin >> n >> a >> b;

    std::vector<int> d(n);

    for (int i = 0; i < n; i++) {
        std::cin >> d[i];
    }

    bool ans = check(d, a, b);

    if (ans) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    return 0;
}
