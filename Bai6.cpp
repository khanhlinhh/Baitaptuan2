#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int num = 1;
    int f[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            f[i][j] = num;
            num++;
            if (num > n) {
                num = 1;
            }
        }
        num = i + 2;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << f[i][j];
        }
        cout << endl;
    }
}