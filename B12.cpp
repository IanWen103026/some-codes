#include <bits/stdc++.h>
#define int long long
#define F first
#define S second
using namespace std;

signed main() {
    // I/O 優化
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // 主程式 
    vector<int> nums(3);
    for (int i=0;i<3;i++) {
        cin >> nums[i];
    }
    sort(nums.begin(),nums.end());
    cout << nums[1];
}