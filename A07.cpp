#include<iostream> // 引入函式庫
using namespace std; // 設定命名空間
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); // 這行不要看，I/O優化，對不起我在耍毒
    long long n; // 初始化n，數字蠻大的所以我開long long
    cin >> n; // 輸入n
    cout << (n%100 - n%10)/10; // 輸出題目要的
}