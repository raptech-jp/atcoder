#include<iostream>
#include<string>
#include<vector>
#include<regex>

using namespace std;

int main(){
    string s;
    cin >> s;
    regex re(".*san");

    if (regex_match(s, re))
    {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
