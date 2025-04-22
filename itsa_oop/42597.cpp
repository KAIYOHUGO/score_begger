#include <iostream>
#include <cmath>

using namespace std;

int main() {
    unsigned int n;
    cin >> n;
    while (n--) {
        int x, y;
        cin >> x >> y;
        cout << static_cast<unsigned int>((x + y) * (x + y)) << endl;
    }
    return 0;
}
