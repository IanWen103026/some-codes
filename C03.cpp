#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,cnt=0,b;
    cin >> a;
    
    for (int i=0;i<a;i++) {
        cin >> b;
        cnt+=b;
    }
    cout << cnt;
}