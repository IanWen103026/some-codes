#include<iostream> // 引入函式庫
using namespace std; // 設定命名空間
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); // 這行不要看，I/O優化，對不起我在耍毒
    int age; // 年齡
    cin >> age; // 輸入年齡
    cout << "You are " << age <<" years old."; // 輸出題目要求的
}