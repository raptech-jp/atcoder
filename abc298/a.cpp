#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int n;
    string s;
    bool flag = false;

    cin >> n;
    cin >> s;


    for(int i = 0; i < n; i++){
        if(s[i] == 'o'){
            flag = true;
        }else if (s[i] == 'x'){
            flag = false;
            break;
        }
    }
    
    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}
