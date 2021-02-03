#include <iostream>
#include <cmath>


using namespace std;

int main () {
    double a, b, c;
    cin >> a >> b >> c;
    double delta;
    delta = b*b - 4*a*c;
    if (delta < 0) {
        cout << "Phuong trinh vo nghiem" << endl;
    }
    else if (delta == 0) {
        cout << "Phuong trinh co nghiem kep la: "
             << -b/(2*a) << endl;
    }
    else {
        cout << "Phuong trinh co 2 nghiem phan biet la: "
             << (-b+sqrt(delta))/(2*a) << " " << (-b-sqrt(delta))/(2*a) << endl;
    }
}