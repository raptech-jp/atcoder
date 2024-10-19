#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int n;
    int flag = -1;
    vector<int> h;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        h.push_back(tmp);
    }

    for (int i = 0; i < h.size(); i++)
    {
        if(h[i]>h[0]){
            flag = i+1;
            break;
        }    
    }

    cout << flag << endl;
    
    return 0;
}
