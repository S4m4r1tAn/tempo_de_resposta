#include <iostream>
#include <ctime>

int main() {
    int sum = 0;
    clock_t start, end;
    double cpu_time_used;
    start = clock();
    for (int i = 1; i <= 100000000; i++) {
        sum += i;
    }
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    std::cout << "Sum = " << sum << std::endl;
    std::cout << "Time taken: " << cpu_time_used << " seconds" << std::endl;
    return 0;
}