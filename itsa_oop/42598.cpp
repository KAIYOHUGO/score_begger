#include <iostream>
#include <cmath>
#include <cstdint>
using namespace std;

int main() {
  unsigned int list[3];

  unsigned int max_i = 0;
  cin >> list[0] >> list[1] >> list[2];
  for (unsigned int i = 0; i < 3; i++) {
    if (list[i] > max_i) {
      max_i = list[i];
    }
  }
  cout << max_i << endl;
  return 0;
}
