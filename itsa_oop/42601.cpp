#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int mi;
  cin >> mi;
  cout << "km=" << round((double)mi * 1.6 * 10.0) / 10.0 << endl;
  return 0;
}
