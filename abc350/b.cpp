#include <iostream>
#include <vector>

int main(void){
    int N, Q;
    int num, count = 0;

    std::cin >> N >> Q;

    std::vector<bool> T(N, true);

    while (std::cin >> num) {
        T[num - 1] = !T[num - 1];
    }

    for (size_t i = 0; i < N; i++)
    {
        if(T[i]){
            count++;
        }
    }
    
    std::cout << count << std::endl;

}