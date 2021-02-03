#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b < c || b + c < a || a + c < b) {
        cout << "Khong phai tam giac" << endl;
    }
    else {
    cout << "Chu vi tam giac la: " << a+b+c << endl;
    if (a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b) {
        cout << "Tam giac vuong" << endl;
    }
    else if (a == b && a == c) {
        cout << "Tam giac deu" << endl;
    }
    else if (a == b || b == c || a == c) {
        cout << "Tam giac can" << endl;
    }
    else cout << "Tam giac thuong" << endl;
    }
}