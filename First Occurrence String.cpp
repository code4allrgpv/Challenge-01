#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, ans = "";
        cin >> s;
        vector<int> a(26, 0);
        for (auto i : s) {
            if (a[i - 'a'] == 0)
                ans += i;
            a[i - 'a']++;
        }
        cout << ans << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
