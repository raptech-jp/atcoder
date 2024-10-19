#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int n, k, x;
    vector<int> a;

    cin >> n >> k >> x;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }

    a.insert(a.begin() + k , x);

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
