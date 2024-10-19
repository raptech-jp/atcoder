#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int n, k;
    vector<int> a;
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }

    for (int i = 0; i < n; i++){
        cout << a[(i + (n - k)) % n] << " ";         
    }
    cout << endl;

    return 0;
}
