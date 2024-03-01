#include <bits/stdc++.h>
#define int long long
#define F first
#define S second
using namespace std;

signed main() {
    // I/O 優化
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // 主程式  
    int num,year;
    cin >> num >> year;
    int price = (year<=12) ? 600 : ((year>=65) ? 500 : 1200);  
    if (num%2) {
        price = price*4/5;
    } else {
        price -= 200;
    }
    cout << price;
}