#include <iostream>

using namespace std;

int main ()
{
    int n,m;
    while (true) {
        cin >> n;
        if (n != m) {
            cout << n <<  " ";
            m = n;
        }
        if (n < 0) break;
    }
}