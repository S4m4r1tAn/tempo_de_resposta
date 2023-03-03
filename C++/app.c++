#include <iostream>

int main() {
    int sum = 0;
    for (int i = 1; i <= 100000000; i++) {
        sum += i;
    }
    std::cout << "Sum = " << sum << std::endl;
    return 0;
}