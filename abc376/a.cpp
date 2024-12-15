#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int n,c;
    int count = 0;
    cin >> n >> c;

    int last = -1 * c;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp - last >= c)
        {
            count++;
            last = tmp;
        }
    }

    cout << count << endl;
    
    return 0;
}
