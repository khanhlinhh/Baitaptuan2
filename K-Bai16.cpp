#include <iostream>

using namespace std;

int main () {
    int n;
    string s;
    do {
        cout << "Nhap vao mot so trong khoang 0..9: ";
        cin >> n;
        if (n < 10) {
        cout << "Vua nhap chu so ";
        switch (n) {
            case 0:
            s = "khong";
            break;

            case 1:
            s = "mot";
            break;

            case 2:
            s = "hai";
            break;

            case 3:
            s = "ba";
            break;

            case 4:
            s = "bon";
            break;

            case 5:
            s = "nam";
            break;

            case 6:
            s = "sau";
            break;

            case 7:
            s = "bay";
            break;

            case 8:
            s = "tam";
            break;

            case 9:
            s = "chin";
            break;
        }
        cout << s << endl;
        }
    } while (n <= 9 && n >= 0);
}