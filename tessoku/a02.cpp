#include <iostream>
#include <vector>

int main(void)
{
    int n, x;
    bool flag = false;

    std::vector<int> a;

    std::cin >> n >> x;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        std::cin >> tmp;
        a.push_back(tmp);
        if (tmp == x)
        {
            flag = true;
        }
    }

    if (flag)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }

    return 0;
}
