#include<bits/stdc++.h> // 引入函式庫 (萬用函式庫)
using namespace std; // 設定命名空間
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); // 這行不要看，I/O優化，對不起我在耍毒
    int a,b,cnt=0; // 初始化 
    cin >> a >> b; // 輸入
    for (int i=a;i<=b;i++) { // 逐個檢查
        !(i%2) ? cnt++:0; // 三元運算子用瘋了
    }
    cout << cnt; // 輸出
}