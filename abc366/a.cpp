#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int n,t,a;
    cin >> n >> t >> a;

    if (t*2>n || a*2>n)
    {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
    return 0;
}
