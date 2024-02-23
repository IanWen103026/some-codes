#include<bits/stdc++.h> // 引入函式庫 (萬用函式庫)
using namespace std; // 設定命名空間
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); // 這行不要看，I/O優化，對不起我在耍毒
    int animalcnt,legcnt,chicken,rabbit;
    cin >> animalcnt >> legcnt; // 初始化
    rabbit = legcnt/2-animalcnt; // 解方程式
    chicken = animalcnt-rabbit; // 解方程式得出雞數
    cout << chicken << " " << rabbit; // 輸出
}