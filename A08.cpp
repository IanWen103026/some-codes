#include<iostream> // 引入函式庫
using namespace std; // 設定命名空間
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); // 這行不要看，I/O優化，對不起我在耍毒
    string n; // 初始化n，我懶，所以我用字串解
    cin >> n; // 輸入n
    for (int i=5;i>=0;i--) { // 執行六次
        cout << n[i] << "\n"; // 輸出
    }
}