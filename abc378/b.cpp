#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;  // N と Q の入力を受け取る
    vector<int> q(N);
    vector<int> r(N);

    for (int i = 0; i < N; i++) {
        cin >> q[i] >> r[i];  // 各種類のゴミの q と r を入力
    }

    for (int j = 0; j < Q; j++) {
        int d, t;
        cin >> d >> t;  // 質問の d 日と t 種類目のゴミを入力

        // 次に収集される日を計算
        // ゴミが出た日が収集日である場合
        if (d % q[t - 1] == r[t - 1]) {
            cout << d << endl;  // 同じ日に収集される
        } else {
            // 次の収集日を計算
            int nextCollectionDay = (d / q[t - 1] + 1) * q[t - 1] + r[t - 1];
            while (nextCollectionDay < d) {
                nextCollectionDay += q[t - 1];  // もし計算した日が d 日よりも過去であれば、次の周期を追加
            }
            cout << nextCollectionDay << endl;  // 次に収集される日を出力
        }
    }

    return 0;
}
