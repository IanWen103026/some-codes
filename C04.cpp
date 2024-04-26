#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,cnt1=0,cnt2=0,b;
    cin >> a;
    for (int i=0;i<a;i++) {
        cin >> b;
        if (b%2) {
            cnt1++;
        } else {
            cnt2++;
        }
    }
    cout << cnt1 << " " << cnt2;
}