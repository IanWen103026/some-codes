#include<bits/stdc++.h> // 引入函式庫 (萬用函式庫)
using namespace std; // 設定命名空間
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); // 這行不要看，I/O優化，對不起我在耍毒
    double weight,height;
    cin >> weight >> height;
    height/=100;
    cout << fixed << setprecision(3) << weight/(height*height); // 就 四捨五入到第三位
}