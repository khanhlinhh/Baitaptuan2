#include <iostream>

using namespace std;

int main () {
    double n, num, i = 1;
    cin >> n;
    double max, min;
    for (; i <= n; i++) {
        cin >> num;
        if (i == 1) {
            min = num;
            max = num; 
        }
        if (max < num) max = num;
        if (min > num) min = num;
    }
    cout << max << " " << min << endl;
}