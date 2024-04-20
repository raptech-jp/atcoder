#include <iostream>

void sort(int N){
    int A[N];

    for (int i = 0; i < N; i++)
    {
        std::cin >> A[i];
    }

    for (int i = 0; i < N - 1; i++) {
        int min = i;
        for (int j = i + 1; j < N; j++) {
            if (A[j] < A[min]) {
                min = j;
            }
        }
        int tmp = A[i];
        A[i] = A[min];
        A[min] = tmp;
        std::cout << i << " " << min << std::endl;
    }
}

int main(void){
    int N;
    std::cin >> N;
    sort(N);
    return 0;
}
