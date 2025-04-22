#include <iostream>
using namespace std;

int main() {
  unsigned int n;
  cin >> n;
  while (n--) {
    unsigned int x;
    cin >> x;
    cout << (50 <= x && x <= 70 ? x : 100) << endl;
  }
  return 0;
}
