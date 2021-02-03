#include <iostream>

using namespace std;

int ucln (int tso, int mso) {
    int a, b;
    a = tso;
    b = mso;
    while (a!=b) {
        if (a > b) a -= b;
        else b -= a;
    }
    return a;
}

int main() {
    int tso, mso;
    cin >> tso >> mso;
    if (tso == mso) cout << "1 1" << endl;
    else {
        int uoc = ucln(tso,mso);
        tso /= uoc;
        mso /= uoc;
        cout << tso << " " << mso << endl;
    }
}