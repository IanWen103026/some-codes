#include<bits/stdc++.h> // 引入函式庫 (萬用函式庫)
using namespace std; // 設定命名空間
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); // 這行不要看，I/O優化，對不起我在耍毒
    int a,b,c,d; // 初始化
    cin >> a >> b >> c >> d; // 輸入
    a = a+b;
    b = c+d; // 做一些很糟糕的事情
    cout << ((a==b) ? "Again" : ((a>b) ? "Min" : "Shin")); // 非常好三元運算子
}