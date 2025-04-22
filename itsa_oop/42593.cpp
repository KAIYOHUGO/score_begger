#include <iostream>
using namespace std;

int main() {
    unsigned int a, b, c;
    cin >> a >> b >> c;
    cout << "Trapezoid area:" << fixed;
    cout.precision(1);
    cout << ((double)a + (double)b) * (double)c / 2.0 << endl;
    return 0;
}
