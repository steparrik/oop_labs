#include "count_ones.h"

int countOnes(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int calculateTotalOnes(int a, int b) {
    if (a < 0 || b < a) {
        return -1;
    }
    int total = 0;
    for (int i = a; i <= b; ++i) {
        total += countOnes(i);
    }
    return total;
}