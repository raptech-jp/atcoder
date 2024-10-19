#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    string s;
    int count = 0;

    for (int i = 0; i < 12; i++)
    {
        cin >> s;
        if (s.length() == i+1)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
