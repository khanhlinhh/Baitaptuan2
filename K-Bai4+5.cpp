#include <iostream>

using namespace std;

int main() {
    int x, y, a, b;
    cin >> x >> y;
    a = x;
    b = y;
    int UCLN, BCNN;
    while (a!=b) {
        if (a > b) a -= b;
        else b -= a;
    }
    UCLN = a;
    BCNN = (x*y)/UCLN;
    cout << "Boi chung nho nhat la: " << BCNN << endl;
    cout << "Uoc chung nho nhat la: " << UCLN << endl;

}