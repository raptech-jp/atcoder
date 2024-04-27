#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
    int N, tmp;
    int count = 0;
    std::cin >> N;
    std::vector<int> A;
    for (int i = 0; i < N; i++)
    {
        std::cin >> tmp;
        A.push_back(tmp);

        if (A.size() > 2)
        {
            std::cout << "A[A.size() - 2]: " << A[A.size() - 2] << std::endl;
            std::cout << "A[A.size() - 1]: " << A[A.size() - 1] << std::endl;
            while (A[A.size() - 1] == A[A.size() - 2])
            {
                A[A.size() - 2] = A[A.size() - 2]+1;
                A.pop_back();
            }
        }
    }
    std::cout << A.size() << std::endl;

    return 0;
}
