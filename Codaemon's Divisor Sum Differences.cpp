#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int a, b, ans = 0;
    cin >> a >> b;
    int mx = max(a, b);
    int mi = min(a, b);
    for(int i = 1; i <= mi; ++i) {
        ans += (mi / i) * i;
    }
    for(int i = 1; i <= mx; ++i) {
        ans -= (mx / i) * i;
    }
    cout << -ans;
    return 0;
}
