#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int f0 = 0, f1 = 1;
    cout << f0 << " " << f1 << " ";
    for (int i = 1; ; i++) {
        int f = f0 + f1;
        if (f > n) break;
        cout << f << " ";
        f0 = f1;
        f1 = f;
    }
}