#include<bits/stdc++.h> // 引入函式庫 (萬用函式庫)
using namespace std; // 設定命名空間
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); // 這行不要看，I/O優化，對不起我在耍毒
    double a,b,c,d;
    cin >> a >> b >> c >> d;
    a = floor(a); 
    b = floor(b); // 國英無條件捨去
    c = ceil(c);
    d = ceil(d); // 數地無條件進位
    cout << fixed << setprecision(0) << (a+b+c+d)/4; // 輸出平均
}