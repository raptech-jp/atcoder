#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int A[4] = {0};
    int count = 0;
    int S;

    for (int i = 0; i < 4; i++) {
        cin >> S;
        A[S - 1]++;
    }

    for (int i = 0; i < 4; i++) {
        count += A[i] / 2;
    }

    cout << count << endl;
    return 0;
}
