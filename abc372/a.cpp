#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    string input, output;

    cin >> input;
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i]!='.')
        {
            output.push_back(input[i]);
        }
        
    }
    
    cout << output << endl;

    return 0;
}
