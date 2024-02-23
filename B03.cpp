#include<bits/stdc++.h> // 引入函式庫 (萬用函式庫)
using namespace std; // 設定命名空間
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); // 這行不要看，I/O優化，對不起我在耍毒
    int score; // 初始化
    char level;
    cin >> score; // 輸入
    if (score>=90) {
        level = 'A';
    } else if (score>=80) {
        level = 'B';
    } else if (score>=70) {
        level = 'C';
    } else if (score>=60) {
        level = 'D';
    } else {
        level = 'F';
    }

    cout << level; // 輸出的啦
}