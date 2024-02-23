#include<bits/stdc++.h> // 引入函式庫 (萬用函式庫)
using namespace std; // 設定命名空間
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); // 這行不要看，I/O優化，對不起我在耍毒
    long long h,m,s1,s2; // 初始化
    cin >> h >> m >> s1; // 輸入第一個時間
    s1 = s1 + 60*m + 3600*h; // 計算第一個時間的秒數總和
    cin >> h >> m >> s2; // 輸入第二個時間
    s2 = s2 + 60*m + 3600*h; // 計算第二個時間的秒數總和
    cout << abs(s1-s2); // 絕對值(第一時間-第二時間)
}