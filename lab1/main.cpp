#include <iostream>
#include "count_ones.h"

int main() {
    int a, b;
    std::cin >> a >> b;
    int result = calculateTotalOnes(a, b);
    if (result == -1) {
        std::cout << "Invalid input" << std::endl;
    } else {
        std::cout << result << std::endl;
    }
    return 0;
}