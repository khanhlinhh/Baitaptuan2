#include <iostream>
#include <cmath>

using namespace std;

int main () {
    double n;
    cin >> n;
    if (sqrt(n)*sqrt(n) == n) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}