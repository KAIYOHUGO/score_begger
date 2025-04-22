#include <iostream>
using namespace std;

int main() {
    unsigned int w, h;
    cin >> w >> h;
    double ans = static_cast<double>(w) * static_cast<double>(h) / 2.0;
    cout << "Triangle area:" << fixed;
    cout.precision(1);
    cout << ans << endl;
    return 0;
}
