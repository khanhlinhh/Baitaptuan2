#include <iostream>
#include <cmath>

using namespace std;

bool checkPrime (int n) {
    int m = sqrt(n);
    if (m*m == n) return true;
    else return false;
}

bool checkPer (int n) {
    int sum = 0;
    for (int i = 1; i <= n/2; i++) {
        if (n%i == 0) sum+=i;
    }
    if (sum == n) return true;
    else return false;
}

bool checknguyento (int n) {
    if (n < 2) return false;
    else if (n % 2 == 0) return false;
    else {
        for (int i = 3; i <= sqrt(n); i+=2) {
            if (n % i == 0) return false;
        }
    }
    return true;
}

int main () {
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        if (checkPrime(i) or checkPer(i) or checknguyento(i)) {
            cout << i << " ";
        }
    }
    return 0;
}