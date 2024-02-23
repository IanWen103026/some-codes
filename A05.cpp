#include<iostream> // 引入函式庫
using namespace std; // 設定命名空間
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); // 這行不要看，I/O優化，對不起我在耍毒
    int a,b; // 初始化ab
    cin >> a >> b; // 輸入ab
    cout << a << " + " << b << " = " << a+b << "\n"; // +
    cout << a << " - " << b << " = " << a-b << "\n"; // -
    cout << a << " * " << b << " = " << a*b << "\n"; // *
    cout << a << " / " << b << " = " << a/b << "\n"; // /
    cout << a << " % " << b << " = " << a%b; // %
}