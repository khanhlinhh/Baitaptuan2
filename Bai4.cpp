#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int m = 1;
    for (int i = 1; i <= n; i++) {
        if (i > 1) {
        for (int k = 1; k < i; k++) {
            cout << " ";
        } 
    }
        for (int j = m; j <= n*2-1; j++) {
            cout << "*";
        }
        if (i > 1) {
        for (int k = 1; k < i; k++) {
            cout << " ";
        }
    }
        m+=2;
        cout << endl;
    }
}