#include <iostream>
using namespace std;

unsigned int digit(unsigned int n, unsigned int i) {
    unsigned int d = 1;
    while (i--) {
        d *= 10;
    }
    return n / d % 10;
}

int main() {
    unsigned int a;
    cin >> a;

    unsigned int b = a;
    unsigned int m = 0;

    while (b != 0) {
        m++;
        b /= 10;
    }

    for (unsigned int i = 0; i < m / 2; i++) {
        if (digit(a, i) != digit(a, m - i - 1)) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
