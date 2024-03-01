#include <bits/stdc++.h>
#define int long long
#define F first
#define S second
using namespace std;

signed main() {
    // I/O 優化
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // 主程式  
    vector<int> one(7);
    vector<int> two(7);
    bool vaild=1;
    for (int i=0;i<7;i++) {
        cin >> one[i];
    }

    for (int i=0;i<7;i++) {
        cin >> two[i];
    }

    if (!((one[1]^one[3])&&(one[1]==one[5]))) {
        vaild = 0;
        cout << "A";
    } else if (!((two[1]^two[3])&&(two[1]==two[5]))) {
        vaild = 0;
        cout << "A";
    }
    

    if (!((one[6])&&(!two[6]))) {
        vaild = 0;
        cout << "B";
    }

    if (!((one[1]^two[1])&&(one[3]^two[3])&&(one[5]^two[5]))) {
        vaild = 0;
        cout << "C";
    }
    if (vaild) {
        cout << "None";
    }
}