#include<bits/stdc++.h> // 引入函式庫 (萬用函式庫)
using namespace std; // 設定命名空間
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); // 這行不要看，I/O優化，對不起我在耍毒
    vector<int> e(3); // 開一個三個原素的陣列
    cin >> e[0] >> e[1] >> e[2]; // 輸入
    sort(e.begin(),e.end()); // 排序三個邊
    cout << ((e[0]+e[1]) > e[2]); // 最小的兩條邊加起來要比第三邊長
}