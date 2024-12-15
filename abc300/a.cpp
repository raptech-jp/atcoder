#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int n,a,b;
    int ans;

    cin >> n >> a >> b;

    for (int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        if (tmp == a+b)
        {
            ans = i+1;
        }
    }
    
    cout << ans << endl;

    return 0;
}
