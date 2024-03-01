#include <bits/stdc++.h>
#define int long long
#define F first
#define S second
using namespace std;

signed main() {
    // I/O 優化
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // 主程式  
    int classes[7] = {490,550,610,670,780,840,910},hr,minu;
    cin >> hr >> minu;
    int ts = hr*60+minu, vaild=1;
    for (int i=0;i<7;i++) {
        if (classes[i]<=ts&&classes[i]+50>ts) {
            vaild = 0;
        }
    }
    cout << (vaild ? "YES" : "NO");
}