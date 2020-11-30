#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string a, b;
    cin >> a >> b;
    int n = a.size(), i, mn = 0, mx = 0;
    for (i = 0; i < n; i++) {
        if ((a[i] != '?' && b[i] != '?') && (a[i] != b[i]))
            mn++;
    }
    for (i = 0; i < n; i++) {
        if ((a[i] == '?' || b[i] == '?') || (a[i] != b[i]))
            mx++;
    }
    cout << mn << " " << mx;
    return 0;
}

