#include <iostream>

using namespace std;

int main () {
    string num;
    cin >> num;
    int l = num.length();
    int sum = 0;
    for (int i = 0; i < l; i++) {
        num[i] = num[i] - '0';
        sum += num[i];
    }
    cout << sum << endl;
}