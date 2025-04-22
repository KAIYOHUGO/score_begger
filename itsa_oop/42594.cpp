#include <iostream>
#include <cmath>

using namespace std;

int main() {
    unsigned int n;
    cin >> n;
    while (n--) {
        float w;
        cin >> w;
        cout << fixed;
        cout.precision(1);
        cout << roundf(w * w * 10.0f) / 10.0f << endl;
    }
    return 0;
}
