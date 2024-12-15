#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k, seat = 0, count = 0;
    vector<int> array;  // グループごとの人数を格納
    cin >> n >> k;      // n: グループ数, k: 座席数

    // 各グループの人数を入力
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        array.push_back(tmp);
    }

    // グループごとに処理
    for (int i = 0; i < n; i++) {
        // 新しいアトラクションがスタートするたびにカウント

        // 座席が空いていて、そのグループ全員が座れる場合
        if (seat + array[i] <= k) {
            seat += array[i];  // グループ全員が座る
        }
        // 座席が足りない場合、次のアトラクションまで待機
        else {
            seat = 0;  // 新しいアトラクションが始まる（座席をリセット）
            count++;
            i--;       // 同じグループを次のアトラクションで再度確認
        }
    }

    cout << count +1 << endl;  // アトラクションがスタートした回数を出力

    return 0;
}
