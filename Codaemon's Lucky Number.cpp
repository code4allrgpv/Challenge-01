#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin >> t;
    while (t--) {
        long long n, c = 0;
        cin >> n;
        while (n > 0) {
            if (n % 10 == 3)
                c++;
            n /= 10;
        }
        cout << c << endl;
    }
    return 0;
}

