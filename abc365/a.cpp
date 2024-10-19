#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int year;

    cin >> year;

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        cout << 366 << endl;
    }else{
        cout << 365 << endl;
    }

    return 0;
}
