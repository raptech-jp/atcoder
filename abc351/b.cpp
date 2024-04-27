#include <iostream>
#include <vector>

int main(void)
{
    int N;
    std::cin >> N;
    std::vector<std::vector<char>> A(N, std::vector<char>(N));
    std::vector<std::vector<char>> B(N, std::vector<char>(N));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            std::cin >> A[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            std::cin >> B[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (A[i][j] != B[i][j])
            {
                std::cout << i + 1 << " " << j + 1 << std::endl;
            }
        }
    }

    return 0;
}
