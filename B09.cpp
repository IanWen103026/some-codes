#include <bits/stdc++.h>
#define int long long
#define F first
#define S second
using namespace std;

signed main() {
    // I/O 優化
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // 主程式  
    int year;
    cin >> year;
    cout<<(((!(year%4)&&(year%100))||(!(year%400))) ? "Yes" : "No");
}