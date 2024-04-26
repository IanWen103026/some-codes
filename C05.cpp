#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,cnt=0,b,c;
    cin >> a;
    for (int i=0;i<a;i++) {
        cin >> b >> c;
        cnt+=(b*c);
    }
    cout << cnt;
}