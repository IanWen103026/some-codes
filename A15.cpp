#include<bits/stdc++.h> // 引入函式庫 (萬用函式庫)
using namespace std; // 設定命名空間
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); // 這行不要看，I/O優化，對不起我在耍毒
    int now=0,up,down,goal,daycnt=0; // 初始化
    cin >> goal >> up >> down; // 輸入
    while (now<goal) { // 未達到目標將持續執行
        daycnt++; // 天數+1
        now+=up; // 往上爬A
        if (now>=goal) { // 檢查是否抵達目標
            break; // 抵達跳出迴圈
        } else {
            now-=down; // 未抵達，下滑B
        }
    }
    cout << daycnt; // 輸出
}