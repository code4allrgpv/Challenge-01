#include <bits/stdc++.h>
using namespace std;

// Let n = 6,
// => F(1) + F(2) + F(3) + F(4) + F(5) + F(6)
// => 1 will occurs 6 times in F(1), F(2),
//    F(3), F(4), F(5) and F(6)
// => 2 will occurs 3 times in F(2), F(4) and
//    F(6)
// => 3 will occur 2 times in F(3) and F(6)
// => 4 will occur 1 times in F(4)
// => 5 will occur 1 times in F(5)
// => 6 will occur 1 times in F(6)

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
