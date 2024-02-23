#include<iostream> // 引入函式庫
using namespace std; // 設定命名空間
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); // 這行不要看，I/O優化，對不起我在耍毒
    long long n; // 初始化n
    for (int i=0;i<3;i++) { // 執行三次
        cin >> n; // 輸入n
        cout << n << "\n"; // 輸出n
    }
}