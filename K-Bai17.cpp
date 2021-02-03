#include <iostream>

using namespace std;

int main () {
    double n, ave=0;
    const int num = 5;
    int i = 1;
    while (i <= 5) {
        cin >> n;
        ave += n;
        i++;
    }
    ave /= num;
    cout << ave << endl;
}