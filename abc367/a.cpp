#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;

    bool flag = false;

    if (c < b) {
        if (a >= c && a < b) {
            flag = true;
        }
    } else {
        if (a >= c || a < b) {
            flag = true;
        }
    }


    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}
