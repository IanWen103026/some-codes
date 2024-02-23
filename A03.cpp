#include<iostream> // 引入函式庫
using namespace std; // 設定命名空間
int main() {
    ios_base::sync_with_stdio(0); cout.tie(0); // 這行不要看，I/O優化，對不起我在耍毒
    int a,b,c,d; // 初始化abcd
    cin >> a >> b >> c >> d; // 輸入abcd
    cout<< "https://" << a << "." << b << "." << c << "." << d; // 輸出題目要求的
}