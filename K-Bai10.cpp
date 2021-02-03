#include <iostream>

using namespace std;

int main () {
    double fah, cel, kel;
    cin >> fah;
    cel = ((fah-32)*5)/9;
    kel = cel + 273.15;
    cout << "Fahrenheit       Celsius        Absolute Value" << endl
         << fah <<  "                " << cel << "           " << kel << endl;
}