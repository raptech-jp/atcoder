#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
    int n, count = 0;
    string s = "";
    vector<string> x;
    cin >> n >> s;
    
    x.push_back(":");

    for (int i = 0; i < n; i++)
    {
        x.push_back(string(1, s[i]));
    }
    x.push_back(":");

    for (int i = 0; i < int(x.size()); i++)
    {
        if (x[i] == ".")
        {
            if (x[i-1] == "#" && x[i+1] == "#")
            {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}
