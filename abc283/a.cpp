#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    long long result = 1;
    for(int i = 0; i < b; i++){
        result *= a;
    }

    cout << result << endl;

    return 0;
}
