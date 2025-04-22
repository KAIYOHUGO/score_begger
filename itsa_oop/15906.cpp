#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a;
    cin >> a;
    for (unsigned int i = 0; i < 8; i++) {
        cout << ((a & (1 << 7)) != 0);
        a <<= 1;
    }
    cout << endl;
    return 0;
}
