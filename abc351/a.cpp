#include <iostream>

int main(void)
{
    int a = 0;
    int b = 0;
    int tmp;

    for (int i = 0; i < 9; i++)
    {
        std::cin >> tmp;
        a += tmp;
    }

    for (int i = 0; i < 8; i++)
    {
        std::cin >> tmp;
        b += tmp;
    }

    std::cout << a - b + 1 << std::endl;
    return 0;
}
