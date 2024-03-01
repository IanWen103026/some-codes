#include <bits/stdc++.h>
#define int long long
#define F first
#define S second
using namespace std;

signed main() {
    // I/O 優化
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // 主程式  
    int a,b,c,money;
    cin >> a >> b >> c >> money;
    if ((a>c && c>b)||(b>c && c>a)) {
        cout << money*2;
    } else if (a==c||b==c) {
        cout << -money*2;
    } else {
        cout << -money;
    }
}