#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n)
                cout << "#";
            else if (j == 1 || j == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}

