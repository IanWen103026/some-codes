#include <bits/stdc++.h>
#define int long long
#define F first
#define S second
using namespace std;

signed main() {
    // I/O 優化
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // 主程式  
    int n;
    cin >> n;
    if (!(n%3)) {
        cout << 3;
    }
    if (!(n%4)) {
        cout << 4;
    }
    if (!(n%5)) {
        cout << 5;
    }
}