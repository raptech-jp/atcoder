#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    string s;
    int count = 0;
    cin >> s;

    for (int i = 0; i < s.size(); i++){
        if(s[i] == 'v'){
            count = count + 1;
        }else if (s[i] == 'w')
        {
            count = count + 2;
        }else{

        }
        
    }

    cout << count << endl;
    
    return 0;
}
