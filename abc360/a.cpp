#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string s;
    int rice, misorshiru = 0;
    cin >> s;

    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'R'){
            rice = i;
        }else if (s[i] == 'M'){
            misorshiru = i;
        }
    }

    if (rice < misorshiru){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}
