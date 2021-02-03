#include <iostream>

using namespace std;

int main () {
    double a1, b1, c1, a2, b2, c2, x, y;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    if (a1*b2 == a2*b1 && b1*c2 != c1*b2) {
        cout << "He phuong trinh vo nghiem" << endl;
    }
    else if (a1*b2 == a2*b1 && b1*c2 == c1*b2) {
        cout << "He phuong trinh vo so nghiem" << endl;
    }
    else {
        cout << "He co nghiem duy nhat la: " << endl;
    double y = (c1*a2 - c2*a1)/(b1*a2 - b2*a1);
    double x = (c1 - b1*y)/a1;
    cout << x <<  " " << y << endl;
    }
}