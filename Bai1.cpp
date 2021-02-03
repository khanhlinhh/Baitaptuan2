#include <iostream>
#include <cmath>

using namespace std;

bool Prime (int n) {
    if (n < 2) return false;
    if (n % 2 == 0) return false;
    else {
        for (int i = 3; i < sqrt(n); i+=2) {
            if (n % i == 0) return false;
        }
    }
    return true;
}

int main () {
    int n;
    cin >> n;
    if (Prime(n)) cout << "yes" << endl;
    else cout << "no" << endl;
}