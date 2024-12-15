#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    string ab,ac,bc;

    cin >> ab >> ac >> bc;

    if(ab == ">" && bc == ">"){
        cout << "B" << endl;
    }else if(ab == ">" && ac == "<"){
        cout << "A" << endl;
    }else if(ab == "<" && bc == "<"){
        cout << "B" << endl;
    }else if(ab == "<" && ac == ">"){
        cout << "A" << endl;
    }else if(ac == ">" && bc == "<"){
        cout << "C" << endl;
    }else if(ac == "<" && bc == ">"){
        cout << "C" << endl;
    }else{
        cout << "invalid" << endl;
    }

    return 0;
}
