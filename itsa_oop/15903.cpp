#include <iostream>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;
    std::cout << std::fixed << std::setprecision(1) << 1.6 * static_cast<double>(n) << "\n";
    return 0;
}
