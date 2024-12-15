#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n-1);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n-1; i++){
        cin >> b[i];
    }

    sort(a.begin(), a.end()); 
    sort(b.begin(), b.end()); 


    return 0;
}
